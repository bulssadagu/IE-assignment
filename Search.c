#include <stdio.h>
#include <string.h>
#include "Stock.h"

void clearBuffer(void) {
	//입력버퍼에 문자가 들어있으면,
	//문자를 모두 소모하여 버퍼를 비워버림
	//단순히 사용만하고 저장하지 않으면 비워지게 되는 원리 이용
	while (getchar() != '\n');
}
int SearchCompanyName(FNCStatement *a,int *i)
{
	int j;
	char Search[40]; //검색어를 받는 변수
	printf("회사 이름을 입력해주세요\n");
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
	char Code[7]; //검색어를 받는 변수
	printf("회사 코드를 입력해주세요\n");
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
	printf("이름으로 검색하려면 1번, 코드로 검색하려면 2번\n");
	scanf("%d", &swt);
	clearBuffer();
	if (swt == 1)
	{
		do
		{
			if (SearchCompanyName(a, &i) != 0)
			{
				printf("찾았습니다!\n");
				printf("%d번째 회사 %s\n", i + 1, a[i].NameofCompany);
				break;
			}
			else
			{
				printf("못찾았습니다\n");
				printf("이름을 다시 입력해 주세요\n");
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
				printf("찾았습니다!\n");
				printf("%d번째 회사 %s\n", i + 1, a[i].NameofCompany);
				break;
			}
			else
			{
				printf("못찾았습니다\n");
				printf("코드를 다시 입력해 주세요\n");
				i = Search(a);
			}
		} while (SearchCompanyCode == 0);
	}
	else
	{
		printf("1,2를 입력해주세요\n\n");
		i = Search(a);
	}

	return i;
}