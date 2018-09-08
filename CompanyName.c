#include "Stock.h"

char CompanyName(char *str, FNCStatement *a, int count)//회사이름을 받는 함수
{
	int i, j = 0;
	for (i = 0; i < MAX; i++)
	{
		if (str[i] == ']')
		{
			i += 2;
			do{
				a[count].NameofCompany[j] = str[i];
				i++;
				j++;
			} while (str[i] != '\t');
		}
	}
}