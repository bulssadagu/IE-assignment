#define MAX 500

typedef struct 
{
	char NameofCompany[40];//회사명
	char code[7];//종목코드
	long long EPS;//기본주당이익(손실)
	long long ProfitLoss;//당기순이익
	long long CurrentAssets;//유동자산
	long long CurrentLiabilities;//유동부채
	long long Liabilities;//부채통계
	long long Equity;//자본총계
	long long EquityAndLiabilities;//자본과 부채총계
	long long EquityAttributableToOwnersOfParent;//자기자본
	long long Assets;//자산총계

	float Fluctuation;//등락율 입력받음
	float DividedRate;//배당수익률 입력받음
	int CurrentStockPrice;//현재주가 입력받음
	int StartingMoney;//시작할때 넣은 액수 입력받음
	int Holing;//보유주식수 계산함
	long long MarketCap;//시가총액 입력받음
	int CurrentMoney;//현재액수 계산함
	int NumberofShares;//상장주식수 입력받음

	float CurrentRatio;//유동비율 계산함
	float LiabilityRatio;//부채비율 계산함
	float ROE;//자기자본순이익률 계산함
	float ROI;//총자본순이익률 계산함
	float PER;// 계산함
	float BPS;//주당순자산가치 계산함
}FNCStatement;

char CompanyName(char *str, FNCStatement *a, int count);
char CompanyCode(char *str, FNCStatement *a, int count);
int ifrs_ProfitLoss(char *str, FNCStatement *a, int count);
int ifrs_CurrentAssets(char *str, FNCStatement *a, int count);
int ifrs_CurrentLiabilities(char *str, FNCStatement *a, int count);
int ifrs_Liabilities(char *str, FNCStatement *a, int count);
int ifrs_Equity(char *str, FNCStatement *a, int count);
int ifrs_EquityAndLiabilities(char *str, FNCStatement *a, int count);
int ifrs_EquityAttributableToOwnersOfParent(char *str, FNCStatement *a, int count);
int ifrs_Assets(char *str, FNCStatement *a, int count);
int Search(FNCStatement *a);
int input(FNCStatement *a,int CPN);
int Compute(FNCStatement *a, int CPN);
int Transfer(char *arr);