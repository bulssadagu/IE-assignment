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
	

	printf("��Ÿ ���� : %llf\n", a[CPN].CurrentMoney - a[CPN].StartingMoney - (a[CPN].StartingMoney + a[CPN].CurrentMoney)*0.00024 + a[CPN].CurrentMoney*0.003);
	printf("���� ���� : %llf\n", a[CPN].Holing*a[CPN].CurrentStockPrice*a[CPN].DividedRate*0.846);
	printf("������ : %llf\n", a[CPN].EPS * 6 + a[CPN].BPS*0.25 + (a[CPN].DividedRate*a[CPN].CurrentStockPrice * 4 / 100)*(1 + 2 * a[CPN].ROE));


	printf("---------------------------------------------------------------------------------------------------\n");
	printf("�������� : %f %%\n", a[CPN].CurrentRatio*100);
	if (a[CPN].CurrentRatio >= 2)
		printf("200%% �̻� - �����մϴ�\n");
	else if(a[CPN].CurrentRatio <= 1)
		printf("100%% ���� - �Ҿ����մϴ�. ������ �� ���Ǹ� ����մϴ�\n");

	printf("��ä���� : %f %%\n", a[CPN].LiabilityRatio * 100);
	if (a[CPN].LiabilityRatio <= 1)
		printf("100%% ���� - �����մϴ�\n");
	else if(a[CPN].LiabilityRatio >= 2)
		printf("200%% �̻� - ��ä������ ���� �����մϴ�. ������ �� ���Ǹ� ����մϴ�\n");

	printf("�� �ں� ���ͷ�(ȸ���� ���ͷ�) : %f %%\n", a[CPN].ROI * 100);
	if (a[CPN].ROI >= 0.05)
		printf("5%% �̻� - ��ȣ�մϴ�\n");

	printf("�ڱ� �ں� ���ͷ�(�ڱⰡ �� ��) : %f %%\n", a[CPN].ROE * 100);
	if (a[CPN].ROE >= 0.15)
		printf("15%%�̻� - ���ͼ��� ���׿�. ��ȣ�մϴ�\n");
	else if (a[CPN].ROI < 0.05)
		printf("5%% ���� - ���� ������ �� �����ϰڳ׿�!\n");




	return 0;
}