#include <string.h>
#include "Stock.h"

int Transfer(char *arr)
{
	
	for (; *arr != '\0'; arr++)//���� ���ڸ� ���� ������ �ݺ�
	{
		if (*arr == ',')//,�� ���� ������ ��
		{
			strcpy(arr, arr + 1);
			arr--;
		}
	}	
}