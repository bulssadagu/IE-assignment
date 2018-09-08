#include <stdio.h>
#include "Stock.h"

int Compute(FNCStatement *a,int CPN)
{
	a[CPN].Holing = a[CPN].StartingMoney / a[CPN].CurrentStockPrice;	
	a[CPN].CurrentRatio = (float)a[CPN].CurrentAssets / (float)a[CPN].CurrentLiabilities;
	a[CPN].LiabilityRatio = (float)a[CPN].Liabilities / (float)a[CPN].Equity;
	a[CPN].ROI = (float)a[CPN].ProfitLoss / (float)a[CPN].Equity;
	a[CPN].ROE = (float)a[CPN].ProfitLoss / (float)a[CPN].EquityAttributableToOwnersOfParent;
	a[CPN].BPS = (float)(a[CPN].Assets - a[CPN].Liabilities) / (float)a[CPN].NumberofShares;
	a[CPN].PER = a[CPN].MarketCap / a[CPN].ProfitLoss;
	a[CPN].EPS = a[CPN].ProfitLoss / a[CPN].NumberofShares;
	a[CPN].CurrentMoney = a[CPN].StartingMoney*(1 + a[CPN].Fluctuation / 100);


	printf("NameofCompany : %s\n", a[CPN].NameofCompany);
	printf("code : %s\n", a[CPN].code);
	printf("ProfitLoss : %lld\n", a[CPN].ProfitLoss);
	printf("Assets : %lld\n", a[CPN].Assets);
	printf("CurrentAssets : %lld\n", a[CPN].CurrentAssets);
	printf("CurrentLiabilities : %lld\n", a[CPN].CurrentLiabilities);
	printf("Liabilities : %lld\n", a[CPN].Liabilities);
	printf("Equity : %lld\n", a[CPN].Equity);
	printf("EquityAndLiabilities : %lld\n", a[CPN].EquityAndLiabilities);
	printf("DividedRate : %f\n", a[CPN].DividedRate);
	printf("CurrentStockPrice : %d\n", a[CPN].CurrentStockPrice);
	printf("Fluctuation : %f\n", a[CPN].Fluctuation);
	printf("StartingMoney : %d\n", a[CPN].StartingMoney);
	printf("Holing : %d\n", a[CPN].Holing);
	printf("MarketCap : %lld\n", a[CPN].MarketCap);
	printf("CurrentMoney : %d\n", a[CPN].CurrentMoney);
	printf("CurrentRatio : %f\n", a[CPN].CurrentRatio);
	printf("LiabilityRatio : %f\n", a[CPN].LiabilityRatio);
	printf("EquityAttributableToOwnersOfParent : %lld\n", a[CPN].EquityAttributableToOwnersOfParent);

	printf("EPS : %lld\n", a[CPN].EPS);
	printf("ROE : %f\n", a[CPN].ROE);
	printf("ROI : %f\n", a[CPN].ROI);
	printf("BPS : %f\n", a[CPN].BPS);
	

	printf("단타 가격 : %llf\n", a[CPN].CurrentMoney - a[CPN].StartingMoney - (a[CPN].StartingMoney + a[CPN].CurrentMoney)*0.00024 + a[CPN].CurrentMoney*0.003);
	printf("현금 배당금 : %llf\n", a[CPN].Holing*a[CPN].CurrentStockPrice*a[CPN].DividedRate*0.846);
	printf("적정가 : %llf\n", a[CPN].EPS * 6 + a[CPN].BPS*0.25 + (a[CPN].DividedRate*a[CPN].CurrentStockPrice * 4 / 100)*(1 + 2 * a[CPN].ROE));


	printf("---------------------------------------------------------------------------------------------------\n");
	printf("유동비율 : %f %%\n", a[CPN].CurrentRatio*100);
	if (a[CPN].CurrentRatio >= 2)
		printf("200%% 이상 - 안전합니다\n");
	else if(a[CPN].CurrentRatio <= 1)
		printf("100%% 이하 - 불안전합니다. 투자할 때 주의를 요망합니다\n");

	printf("부채비율 : %f %%\n", a[CPN].LiabilityRatio * 100);
	if (a[CPN].LiabilityRatio <= 1)
		printf("100%% 이하 - 안전합니다\n");
	else if(a[CPN].LiabilityRatio >= 2)
		printf("200%% 이상 - 부채비율이 높아 위험합니다. 투자할 때 주의를 요망합니다\n");

	printf("총 자본 수익률(회사의 수익률) : %f %%\n", a[CPN].ROI * 100);
	if (a[CPN].ROI >= 0.05)
		printf("5%% 이상 - 양호합니다\n");

	printf("자기 자본 수익률(자기가 벌 돈) : %f %%\n", a[CPN].ROE * 100);
	if (a[CPN].ROE >= 0.15)
		printf("15%%이상 - 수익성이 좋네요. 양호합니다\n");
	else if (a[CPN].ROI < 0.05)
		printf("5%% 이하 - 은행 적금이 더 유익하겠네요!\n");




	return 0;
}