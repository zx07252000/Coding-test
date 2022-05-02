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
bool Harshad_Number(int x) {
    bool answer = true;
    int temp = x;
    int sum = 0;
   
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return (x%sum==0) ? true : false; // 3항연산자 사용
}
//Lv_1 콜라츠 추측
int Collatz(int num) {
    int answer = 0;
    long long count = num; // 626311을 넣었을때 int범위 넘어가 long long으로 해결

    while (1)
    {
        if (count == 1||answer>499)
        {
            break;
        }
        if (count % 2 == 0)
        {
            count = count / 2;
        }
        else
        {
            count = (count * 3) + 1;
        }
        answer++;
    }
    
    return (answer ==500) ? -1:answer;
}
//Lv_1 이상한 문자 만들기
string solution(string s) {
    string answer = "";
    answer = s;
    int temp = 0;
    for (int i = 0; i < answer.size(); i++)
    {
        if (answer[i] == ' ')
        {
            temp = 0;
            continue;
        }

        if (temp % 2 == 0 && ('a' <= answer[i] && answer[i] <= 'z'))
        {
            answer[i] = toupper(answer[i]);
        }
        else if (temp % 2 == 1 &&'A' <= answer[i] && answer[i] <= 'Z')
        {
            answer[i] = tolower(answer[i]);
        }
        temp++;
    }
  
    return answer;
}
//Lv_1 시저 암호
string Caesar_cipher(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        int c; // 연산 값을 담을 변수
        if (s[i] >= 'a' && s[i] <= 'z') { // char의 최대로 받는 값이 128이므로 오류가 뜬다.
            c = s[i] + n; // int형으로 받아준뒤
            if (c > 'z') c -= 26; // char형의 최대 수치가 넘지않도록 빼주는 작업
            s[i] = (char)c; //int형을 char로 변환.
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            c = s[i] + n;
            if (c > 'Z') c -= 26;
            s[i] = (char)c;
        }
    }
    answer = s;
    return answer;

    
}
int main(void) {
 
    return 0;
}