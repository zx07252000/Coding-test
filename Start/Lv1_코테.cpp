#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

//Lv1_직사각형별찍기
void Rectangle_Star()
{
    int n, m;
    cin >> n >> m;

    // 인자로 받아서 2차원 벡터 초기화
    vector<vector<int>> Arr(n,vector<int>(m,0)); 

    // sum은 인자 arr의 사이즈는 n
    for (const auto Arr_Factor : Arr) 
    {
        // sum2는 인자 sum은 m 
        for (auto Arr_Factor_Factor : Arr_Factor)
        {
            cout <<"*";
        }
        // endl을 안쓰는 이유는 시간초과 날수도 있음
        // 버퍼 정리하는 기능을 가지고 있어서
        cout << "\n";
    }
   
}
//Lv1_X만큼_간격이_있는_N개의숫자
vector<long long> X_Interval_N_Number() {
    
    // 크기가 커서
    long long x;
    // 자연수만 표현
    unsigned int n;
    cin >> x >> n;
    vector<long long> answer;
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        answer.push_back((long long) x * (i+1));
    }

    for (auto answer_Factor : answer)
    {
        cout << answer_Factor << "\n";
    }

    return answer;
}
//Lv1_행렬의덧셈
vector<vector<int>> Procession_Plus(vector<vector<int>> arr_1, vector<vector<int>> arr_2) {

    int x, y;
    x = arr_1.size();
    y = arr_1[0].size();
    vector<vector<int>> answer=arr_1;
   
    for (int i=0; i<x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            answer[i][j]=arr_1[i][j] + arr_2[i][j];
        }
    }
    
    return answer;
}
//Lv1_핸드폰 번호 가리기
string Phone_number_Change(string phone_number) {

    string answer = "";

    int x = phone_number.size();

    for (int i = 0; i < x - 4; i++)
    {
        answer += '*';
    }
    for (int i = x - 4; i < x; i++)
    {
        answer += phone_number.at(i);
    }

    return answer;
}

//Lv_1 하샤드 수
bool solution(int x) {
    bool answer = true;

    return answer;
}
int main(void) {
 
    //Rectangle_Star();

    //X_Interval_N_Number();
    
    vector<vector<int>> answer(5,vector<int>(3));
    vector<vector<int>> answer2(5, vector<int>(3));

   
   
    

    return 0;
}