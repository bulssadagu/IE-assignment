#define MAX 500

typedef struct 
{
	char NameofCompany[40];//ȸ���
	char code[7];//�����ڵ�
	long long EPS;//�⺻�ִ�����(�ս�)
	long long ProfitLoss;//��������
	long long CurrentAssets;//�����ڻ�
	long long CurrentLiabilities;//������ä
	long long Liabilities;//��ä���
	long long Equity;//�ں��Ѱ�
	long long EquityAndLiabilities;//�ں��� ��ä�Ѱ�
	long long EquityAttributableToOwnersOfParent;//�ڱ��ں�
	long long Assets;//�ڻ��Ѱ�

	float Fluctuation;//����� �Է¹���
	float DividedRate;//�����ͷ� �Է¹���
	int CurrentStockPrice;//�����ְ� �Է¹���
	int StartingMoney;//�����Ҷ� ���� �׼� �Է¹���
	int Holing;//�����ֽļ� �����
	long long MarketCap;//�ð��Ѿ� �Է¹���
	int CurrentMoney;//����׼� �����
	int NumberofShares;//�����ֽļ� �Է¹���

	float CurrentRatio;//�������� �����
	float LiabilityRatio;//��ä���� �����
	float ROE;//�ڱ��ں������ͷ� �����
	float ROI;//���ں������ͷ� �����
	float PER;// �����
	float BPS;//�ִ���ڻ갡ġ �����
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