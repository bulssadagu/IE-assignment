#include <stdio.h>
#include <string.h>
#include "Stock.h"

int main()
{
	char str[MAX];	//���� �޴� ����
	FNCStatement a[1495];
	int i, j, count = 0, CPN;//ComPanyNumber
	FILE *comprehensive_income, *financial_position;

	comprehensive_income = fopen("2017_Statement_of_comprehensive_income_connect.txt", "r");//��θ� �������ּ���!!!!


	//������ ��� ������ ������ ���
	if (comprehensive_income == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	fseek(comprehensive_income, 179, SEEK_SET);//ù��° �� ����

	while (count != 1496)
	{
		do {
			a[count].code[6] = '\0';
			fgets(str, MAX, comprehensive_income);
			CompanyCode(str, a, count);
			ifrs_ProfitLoss(str, a, count-1);
		} while (strcmp(a[count].code, a[count - 1].code) == 0);

		CompanyName(str, a, count);

		count++;
	}
	


	financial_position = fopen("2017_Statement_of_financial_position_connect.txt", "r");


	//������ ��� ������ ������ ���
	if (financial_position == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	fseek(financial_position, 179, SEEK_SET);//ù��° �� ����

	count = 0;

	while (count != 1495)
	{
		do {
			a[count].code[6] = '\0';
			fgets(str, MAX, financial_position);
			CompanyCode(str, a, count);
			ifrs_CurrentAssets(str, a, count-1);
			ifrs_CurrentLiabilities(str, a, count-1);
			ifrs_Liabilities(str, a, count-1);
			ifrs_Equity(str, a, count-1);
			ifrs_EquityAndLiabilities(str, a, count-1);
			ifrs_EquityAttributableToOwnersOfParent(str, a, count - 1);
			ifrs_Assets(str, a, count - 1);
		} while (strcmp(a[count].code, a[count - 1].code) == 0);

		count++;
	}

	printf("1495�� �ڵ�,ȸ���̸� �Է� �Ϸ�\n");

	CPN = Search(a);
	input(a,CPN);
	Compute(a, CPN);



	fclose(comprehensive_income);
	fclose(financial_position);
	
	return 0;
}
	