#include "Stock.h"

char CompanyCode(char *str, FNCStatement *a,int count)//ȸ�� �ڵ带 �޴� �Լ�
{
	int i, j;
	for (i = 0; i < MAX; i++)
	{
		if (str[i] == '['&& str[i+1] != 'a')
		{
			i += 1;
			for (j = 0; j < 6; j++,i++)
			{
				a[count].code[j] = str[i];
			}
		}
	}
}	