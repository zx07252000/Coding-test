#include "Bronze.h"
#include "MyState.h"

void Bronze::B_2460()
{
	map<int, tuple<int, int>> Train;
	vector <int> Index_Count;
	int GetOff_Human, Get_Human;
	int Train_Count=0;
	int Index = 1;

	while (1)
	{
		cout << "\n" << "������ �������";
		cin >> GetOff_Human;
		if (Train_Count < GetOff_Human)
		{
			cout << "�ٽ� �Է� (�Ұ���)" << endl;
			continue;
		}
		sum:
		cout << "������ Ż���";
		cin >> Get_Human;
		cout << "\n";

		if (Get_Human + Train_Count > 10000)
		{
			cout << "������ �ִ��ο����� ����.";
			goto sum;
		}

		Train[Index] = make_tuple(GetOff_Human, Get_Human);
		Train_Count = Train_Count - GetOff_Human;
		Train_Count = Train_Count + Get_Human;

		Index_Count.emplace_back(Train_Count);

		cout << "������ ���� �ο�" << Train_Count << "\n";
		Index++;

		if (Index > 10)
			break;
	}

	sort(Index_Count.begin(), Index_Count.end());

	cout << "������ ����� ���� ���Ҵ� �� " <<Index_Count[Index-2];
	
}
void Bronze::B_2501()
{
	int N, K, SUM;
	vector<int> N_s;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			N_s.emplace_back(i);
		}
	}

	if (N_s.size() < K)
		cout << "0";
	else
		cout << N_s[K - 1];
}
void Bronze::B_3460()
{
#pragma region Bitset
	// bitset Ǯ��
	//int n;
	//map <int, char> answer;
	//cin >> n;

	//bitset<8> bit(n); // bitset ����� ����ϸ� �������� �������� ��ȯ 
	//string ans = bit.to_string();

	//for (int i = 7; i >= 0; i--)
	//{
	//	answer.insert({ -(i - 7),ans[i] }); // ���� ����
	//}

	//for (auto iter : answer)
	//{
	//	if (iter.second == '1')
	//	{
	//		cout << iter.first << " ";
	//	}
	//}
#pragma endregion

#pragma region Bitcal
	// ��Ʈ������ + �� Ǯ��
	/*map <int, int> result;
	for(int i=7; i>=0;i--)
	{
		result.insert({ i, n >> i & 1 }); // ��Ʈ����
	}
	for (auto iter : result)
	{
		if (iter.second == 1)
		{
			cout << iter.first << " ";
		}
	}*/
#pragma endregion

}
void Bronze::B_10818()
{
	int N, WriteNum;

	vector <int> RandomNum;
	cout << "������ �Է����ּ��� (1~1000000) ";
	cin >> N;

	if (1 > N || N >= 1000000)
	{
		cout << "������ ����ϴ�.";
	}
	cout << "���� �Է����� ������ ������ŭ ������ �Է����ּ��� (-1000000~1000000) ";
	for (int i = 0; i < N; i++)
	{
		cin >> WriteNum;
		RandomNum.emplace_back(WriteNum);
	}

	sort(RandomNum.begin(), RandomNum.end());

	cout << "�ּҰ� :"<<RandomNum[0] << " " <<"�ִ밪 :"<< RandomNum[N - 1];
}
