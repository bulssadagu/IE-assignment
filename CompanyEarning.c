#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stock.h"


int ifrs_ProfitLoss(char *str, FNCStatement *a, int count)//text file 내의 ifrs_ProfitLoss 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_ProfitLoss\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].ProfitLoss = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}

int ifrs_CurrentAssets(char *str, FNCStatement *a, int count)//text file 내의 ifrs_CurrentAssets 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_CurrentAssets\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].CurrentAssets = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}

int ifrs_CurrentLiabilities(char *str, FNCStatement *a, int count)//text file 내의 ifrs_CurrentLiabilities 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_CurrentLiabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].CurrentLiabilities = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}

int ifrs_Liabilities(char *str, FNCStatement *a, int count)//text file 내의 ifrs_Liabilities 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Liabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].Liabilities = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}

int ifrs_Equity(char *str, FNCStatement *a, int count)//text file 내의 ifrs_Equity 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Equity\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].Equity = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}

int ifrs_EquityAndLiabilities(char *str, FNCStatement *a, int count)//text file 내의 ifrs_EquityAndLiabilities 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_EquityAndLiabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].EquityAndLiabilities = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}
int ifrs_EquityAttributableToOwnersOfParent(char *str, FNCStatement *a, int count)//text file 내의 ifrs_EquityAttributableToOwnersOfParent 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_EquityAttributableToOwnersOfParent\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].EquityAttributableToOwnersOfParent = strtoll(arr, &ptr, 10);
				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}
int ifrs_Assets(char *str, FNCStatement *a, int count)//text file 내의 ifrs_Assets 3분기 값을 받고 싶은 함수
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Assets\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t 이 나올때 까지 j값을 세주는 루프
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j값을 동적할당

		for (l = 0; l < j; l++, k++)// 값을 넣어줌
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// 문자열 비교 - 다르면 메모리 할당 해제
		{
			free(arr);
		}
		else // 문자열 비교 - 같으면 값을 받아준다
		{
			if (cnt == 3)
			{
				Transfer(arr);
				a[count].Assets = strtoll(arr, &ptr, 10);

				free(arr);
				return 0;
			}
			else
			{
				cnt += 1;
				free(arr);
			}

		}
	}
	return 0;
}