#include <stdio.h>
#include "Stock.h"

int input(FNCStatement *a,int CPN)
{
	printf("�����ͷ�(DividedRate)�� �Է����ּ���\n");
	scanf("%f", &a[CPN].DividedRate);
	printf("�����ְ�(CurrentStockPrice)�� �Է����ּ���\n");
	scanf("%d", &a[CPN].CurrentStockPrice);
	printf("�����Ҷ� ���� �׼�(StartingMoney)�� �Է����ּ���\n");
	scanf("%d", &a[CPN].StartingMoney);
	printf("�ð��Ѿ�(MarketCap)�� �Է����ּ���\n");
	scanf("%lld", &a[CPN].MarketCap);
	printf("�����ֽļ�(NumberofShares)�� �Է����ּ���\n");
	scanf("%d", &a[CPN].NumberofShares);
	printf("�����(Fluctuation)�� �Է����ּ���\n");
	scanf("%f", &a[CPN].Fluctuation);
}
