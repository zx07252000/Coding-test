#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <bitset>
#include <string>
using namespace std;

// 백준 2501 약수
void B_2501()
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
// 백준 3460 이진수
void B_3460()
{
	// bitset 풀이
	int n;
	map <int, char> answer;
	cin >> n;

	bitset<8> bit(n);
	string ans = bit.to_string();

	for (int i = 7; i >= 0; i--)
	{
		answer.insert({-(i-7),ans[i]});
	}
	
	for (auto iter : answer)
	{
		if (iter.second == '1')
		{
			cout << iter.first << " ";
		}
	}
	
	// 비트연산자 + 맵 풀이
	/*map <int, int> result;
	for(int i=7; i>=0;i--)
	{
		result.insert({ i, n >> i & 1 });
	}
	for (auto iter : result)
	{
		if (iter.second == 1)
		{
			cout << iter.first << " ";
		}
	}*/
}

int main()
{
	B_3460();
};
