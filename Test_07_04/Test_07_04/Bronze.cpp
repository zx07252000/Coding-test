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
		cout << "\n" << "기차에 내릴사람";
		cin >> GetOff_Human;
		if (Train_Count < GetOff_Human)
		{
			cout << "다시 입력 (불가능)" << endl;
			continue;
		}
		sum:
		cout << "기차에 탈사람";
		cin >> Get_Human;
		cout << "\n";

		if (Get_Human + Train_Count > 10000)
		{
			cout << "기차에 최대인원보다 많다.";
			goto sum;
		}

		Train[Index] = make_tuple(GetOff_Human, Get_Human);
		Train_Count = Train_Count - GetOff_Human;
		Train_Count = Train_Count + Get_Human;

		Index_Count.emplace_back(Train_Count);

		cout << "기차에 현재 인원" << Train_Count << "\n";
		Index++;

		if (Index > 10)
			break;
	}

	sort(Index_Count.begin(), Index_Count.end());

	cout << "기차에 사람이 제일 많았던 수 " <<Index_Count[Index-2];
	
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
	// bitset 풀이
	//int n;
	//map <int, char> answer;
	//cin >> n;

	//bitset<8> bit(n); // bitset 헤더를 사용하면 십진수를 이진수로 변환 
	//string ans = bit.to_string();

	//for (int i = 7; i >= 0; i--)
	//{
	//	answer.insert({ -(i - 7),ans[i] }); // 순서 조절
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
	// 비트연산자 + 맵 풀이
	/*map <int, int> result;
	for(int i=7; i>=0;i--)
	{
		result.insert({ i, n >> i & 1 }); // 비트연산
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
	cout << "정수를 입력해주세요 (1~1000000) ";
	cin >> N;

	if (1 > N || N >= 1000000)
	{
		cout << "범위를 벗어납니다.";
	}
	cout << "위의 입력해준 정수의 갯수만큼 정수를 입력해주세요 (-1000000~1000000) ";
	for (int i = 0; i < N; i++)
	{
		cin >> WriteNum;
		RandomNum.emplace_back(WriteNum);
	}

	sort(RandomNum.begin(), RandomNum.end());

	cout << "최소값 :"<<RandomNum[0] << " " <<"최대값 :"<< RandomNum[N - 1];
}
