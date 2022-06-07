#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

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
//Lv_1 김서방찾기
string Find_Kim(vector<string> seoul) {
    string answer = "";
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    answer += "김서방은 "+to_string(it - seoul.begin())+"에 있다";
    
    return answer;
}
//Lv_1 다트게임
int dart(string dartResult) {
    int answer = 0;
    vector<int> v;
    int index = 0;

    for (int i = 0, s = 0; i < dartResult.size(); ++i)
    {
        if (dartResult[i] >= '0' && dartResult[i] <= '9')
            s = s * 10 + dartResult[i] - '0';
        else if (dartResult[i] == 'S') v.push_back(s), s = 0;
        else if (dartResult[i] == 'D') v.push_back(s * s), s = 0;
        else if (dartResult[i] == 'T') v.push_back(s * s * s), s = 0;
        else if (dartResult[i] == '*') {
            if (v.size() > 1) v.back() *= 2, v[v.size() - 2] *= 2;
            else v.back() *= 2;
        }
        else v.back() = -v.back();

    }
    int ans = 0;
    for (int i = 0; i < v.size(); ++i) ans += v[i];
    return ans;
}

int solution(vector<int> nums) {
    int answer = -1;
    int len = nums.size();

    for (int i = 0; i < len; i++)
    {
        vector<bool> v(len - i, false);
        v.insert(v.end(), 3, true);
        do {
            for (auto i : nums)
            {
                cout << i;

            }
        } while (next_permutation(nums.begin(), nums.end()));

    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}

int b_2588()
{
    int num_1, num_2;
    scanf_s("%d %d", &num_1, &num_2);

    vector<int> sum;
    int temp = 0;
    int answer = 0;

    temp = num_2 % 10; // 1의 자리수 
    sum.push_back(num_1 * temp);

    temp = num_2 / 10; 
    temp = temp % 10;
    sum.push_back(num_1 * temp);

    temp = num_2 / 100;
    sum.push_back(num_1 * temp);
    
    for (auto i : sum)
    {
        cout << i;
        cout << "\n";
    }
    cout << sum[0]+sum[1]*10+sum[2]*100;
    return answer;
}
void b_2884()
{
    int H, M;
    while (1)
    {
        cin >> H >> M;
        if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59))
        {
            break;
        }
        else
        {
            exit(0);
        }
    }
    if (M - 45 >= 0)
    {
        //cout << H << " " << M - 45;
        printf("%d %d",H,M - 45);

    }
    else if (M - 45 < 0)
    {
        if (H == 0)
        {
            //cout << "23" << " " << 60 + (M - 45);
            printf("23 %d", 60 + (M - 45));
        }
        else
        {
            //cout << H - 1 << " " << 60 + (M - 45);
            printf("%d %d",H - 1,60 + (M - 45));
        }
    }
}
void b_2480()
{
    int sum[3] = { 0,0,0 };

    scanf_s("%d %d %d",&sum[0],&sum[1],&sum[2]);
    for (auto i : sum)
    {
        if ((sum[i] > 6) || (sum[i] < 1))
        {
            exit(0);
        }
        else
            break;
    }

    ////같은눈 3개
    //if ((sum[0]==sum[1])&&(sum[1]==sum[2])) 
    //{
    //    cout << 10000 + sum[0] * 1000;
    //}
    //else if (A == B) printf("%d", 1000 + A * 100);
    //else if (B == C) printf("%d", 1000 + B * 100);
    //else if (C == A) printf("%d", 1000 + C * 100);
    //else {
    //    if (A > B && A > C) printf("%d", A * 100);
    //    else if (B > C) printf("%d", B * 100);
    //    else printf("%d", C * 100);
    //}
    
    //// 같은 눈 2개
    //if ((sum[0] == sum[1]) &&(sum[0]!=sum[2]) )
    //{
    //    cout << 1000 + sum[0] * 100;
    //}
    //else if ((sum[1] == sum[2]) && (sum[0] != sum[2]))
    //{
    //    cout << 1000 + sum[1] * 100;
    //}
    //else if ((sum[0] == sum[2]) && (sum[1] != sum[2]))
    //{
    //    cout << 1000 + sum[0] * 100;
    //}
    //
    //if ((sum[0] != sum[1]) && (sum[1] != sum[2]))
    //{
    //    if ((sum[0] > sum[1]) && (sum[0]>sum[2]))
    //    {
    //        cout << sum[0] * 100;
    //    }
    //    else if ((sum[1] > sum[0]) && (sum[1] > sum[2]))
    //    {
    //        cout << sum[1] * 100;
    //    }
    //    else if ((sum[2] > sum[0]) && (sum[2] > sum[1]))
    //    {
    //        cout << sum[2] * 100;
    //    }
    //}
}



// lv2_124나라의숫자
string solution(int n) {
    
    string answer = "";
    string temp[3]{ "4", "1", "2" };
    while (n) {
        // 3으로 나눈뒤 0,1,2에 따라서 저장
        answer = temp[n % 3] + answer;
        // 만일 3으로 나눠 떨어지면 3으로 나누고 -1
        if (!(n % 3))
            n = n / 3 - 1;
        else
            n = n / 3;
    }
    return answer;
}

void test()
{

}

int main(void) {
 
    //b_2588();
    //b_2884();
    //b_2480();
    solution(27);
    
    return 0;
}