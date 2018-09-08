#include <string.h>
#include "Stock.h"

int Transfer(char *arr)
{
	
	for (; *arr != '\0'; arr++)//종료 문자를 만날 때까지 반복
	{
		if (*arr == ',')//,와 같은 문자일 때
		{
			strcpy(arr, arr + 1);
			arr--;
		}
	}	
}