#include "Sliver.h"
#include "MyState.h"

void Sliver::B_2609()
{
	int N, M;
	vector <int> N_List, M_List,Min_List,Max_List;
	int temp = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			N_List.emplace_back(i);
		}
	}
	for (int i = 1; i <= M; i++)
	{
		if (M % i == 0)
		{
			M_List.emplace_back(i);
		}
	}
	for (int i = 1; i < N_List.size(); i++)
	{
		for (int j = 1; j < M_List.size(); j++)
		{
			if (N_List[i] == M_List[j])
			{
				Min_List.emplace_back(N_List[i]);
			}
		}
	}
	
	cout << "최소공약수" << Min_List[Min_List.size() - 1] << "\n";
	temp = Min_List[Min_List.size() - 1];
	cout << "최대공배수" << temp * (N / temp) * (M / temp) << "\n";

}

void Sliver::B_2693()
{

}
