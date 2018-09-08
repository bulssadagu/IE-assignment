#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stock.h"


int ifrs_ProfitLoss(char *str, FNCStatement *a, int count)//text file ���� ifrs_ProfitLoss 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_ProfitLoss\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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

int ifrs_CurrentAssets(char *str, FNCStatement *a, int count)//text file ���� ifrs_CurrentAssets 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_CurrentAssets\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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

int ifrs_CurrentLiabilities(char *str, FNCStatement *a, int count)//text file ���� ifrs_CurrentLiabilities 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_CurrentLiabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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

int ifrs_Liabilities(char *str, FNCStatement *a, int count)//text file ���� ifrs_Liabilities 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Liabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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

int ifrs_Equity(char *str, FNCStatement *a, int count)//text file ���� ifrs_Equity 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Equity\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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

int ifrs_EquityAndLiabilities(char *str, FNCStatement *a, int count)//text file ���� ifrs_EquityAndLiabilities 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_EquityAndLiabilities\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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
int ifrs_EquityAttributableToOwnersOfParent(char *str, FNCStatement *a, int count)//text file ���� ifrs_EquityAttributableToOwnersOfParent 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_EquityAttributableToOwnersOfParent\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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
int ifrs_Assets(char *str, FNCStatement *a, int count)//text file ���� ifrs_Assets 3�б� ���� �ް� ���� �Լ�
{
	int i, j, k, l, cnt = 0;
	char *arr, *ptr;
	char *string = "ifrs_Assets\t";

	for (i = 0; i < MAX; i++)
	{
		k = i;
		for (j = 1; str[i] != '\t'; j++, i++)// \t �� ���ö� ���� j���� ���ִ� ����
		{
			if (str[i] == '\n')
			{
				return 0;
			}
		}

		arr = (char *)calloc(j + 1, sizeof(char));// j���� �����Ҵ�

		for (l = 0; l < j; l++, k++)// ���� �־���
		{
			arr[l] = str[k];
		}
		if (strcmp(arr, string) != 0 && cnt == 0)// ���ڿ� �� - �ٸ��� �޸� �Ҵ� ����
		{
			free(arr);
		}
		else // ���ڿ� �� - ������ ���� �޾��ش�
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