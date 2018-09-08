#include <stdio.h>
#include "Stock.h"

int input(FNCStatement *a,int CPN)
{
	printf("배당수익률(DividedRate)을 입력해주세요\n");
	scanf("%f", &a[CPN].DividedRate);
	printf("현재주가(CurrentStockPrice)을 입력해주세요\n");
	scanf("%d", &a[CPN].CurrentStockPrice);
	printf("시작할때 넣은 액수(StartingMoney)을 입력해주세요\n");
	scanf("%d", &a[CPN].StartingMoney);
	printf("시가총액(MarketCap)을 입력해주세요\n");
	scanf("%lld", &a[CPN].MarketCap);
	printf("상장주식수(NumberofShares)을 입력해주세요\n");
	scanf("%d", &a[CPN].NumberofShares);
	printf("등락율(Fluctuation)을 입력해주세요\n");
	scanf("%f", &a[CPN].Fluctuation);
}
