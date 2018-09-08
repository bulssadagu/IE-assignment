#include <stdio.h>
#include <string.h>
#include "Stock.h"

void clearBuffer(void) {
	//�Է¹��ۿ� ���ڰ� ���������,
	//���ڸ� ��� �Ҹ��Ͽ� ���۸� �������
	//�ܼ��� ��븸�ϰ� �������� ������ ������� �Ǵ� ���� �̿�
	while (getchar() != '\n');
}
int SearchCompanyName(FNCStatement *a,int *i)
{
	int j;
	char Search[40]; //�˻�� �޴� ����
	printf("ȸ�� �̸��� �Է����ּ���\n");
	scanf("%s", &Search);
	for (j = 0; j < 1495; j++)
	{
		if (strcmp(a[j].NameofCompany, Search) == 0)
		{
			*i = j;
			return j;
		}
	}
	return 0;
}
int SearchCompanyCode(FNCStatement *a, int *i)
{
	int j;
	char Code[7]; //�˻�� �޴� ����
	printf("ȸ�� �ڵ带 �Է����ּ���\n");
	scanf("%s", &Code);
	for (j = 0; j < 1495; j++)
	{
		if (strcmp(a[j].code, Code) == 0)
		{
			*i = j;
			return j;
		}
	}
	return 0;
}
int Search(FNCStatement *a)
{
	int i, swt = 0;
	printf("�̸����� �˻��Ϸ��� 1��, �ڵ�� �˻��Ϸ��� 2��\n");
	scanf("%d", &swt);
	clearBuffer();
	if (swt == 1)
	{
		do
		{
			if (SearchCompanyName(a, &i) != 0)
			{
				printf("ã�ҽ��ϴ�!\n");
				printf("%d��° ȸ�� %s\n", i + 1, a[i].NameofCompany);
				break;
			}
			else
			{
				printf("��ã�ҽ��ϴ�\n");
				printf("�̸��� �ٽ� �Է��� �ּ���\n");
				i = Search(a);
			}
		} while (SearchCompanyName == 0);
	}
	else if (swt == 2)
	{
		do
		{
			if (SearchCompanyCode(a, &i) != 0)
			{
				printf("ã�ҽ��ϴ�!\n");
				printf("%d��° ȸ�� %s\n", i + 1, a[i].NameofCompany);
				break;
			}
			else
			{
				printf("��ã�ҽ��ϴ�\n");
				printf("�ڵ带 �ٽ� �Է��� �ּ���\n");
				i = Search(a);
			}
		} while (SearchCompanyCode == 0);
	}
	else
	{
		printf("1,2�� �Է����ּ���\n\n");
		i = Search(a);
	}

	return i;
}