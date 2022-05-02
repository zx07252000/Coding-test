#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

//Lv1_���簢�������
void Rectangle_Star()
{
    int n, m;
    cin >> n >> m;

    // ���ڷ� �޾Ƽ� 2���� ���� �ʱ�ȭ
    vector<vector<int>> Arr(n,vector<int>(m,0)); 

    // sum�� ���� arr�� ������� n
    for (const auto Arr_Factor : Arr) 
    {
        // sum2�� ���� sum�� m 
        for (auto Arr_Factor_Factor : Arr_Factor)
        {
            cout <<"*";
        }
        // endl�� �Ⱦ��� ������ �ð��ʰ� ������ ����
        // ���� �����ϴ� ����� ������ �־
        cout << "\n";
    }
   
}
//Lv1_X��ŭ_������_�ִ�_N���Ǽ���
vector<long long> X_Interval_N_Number() {
    
    // ũ�Ⱑ Ŀ��
    long long x;
    // �ڿ����� ǥ��
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
//Lv1_����ǵ���
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
//Lv1_�ڵ��� ��ȣ ������
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
//Lv_1 �ϻ��� ��
bool Harshad_Number(int x) {
    bool answer = true;
    int temp = x;
    int sum = 0;
   
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return (x%sum==0) ? true : false; // 3�׿����� ���
}
//Lv_1 �ݶ��� ����
int Collatz(int num) {
    int answer = 0;
    long long count = num; // 626311�� �־����� int���� �Ѿ long long���� �ذ�

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
//Lv_1 �̻��� ���� �����
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
//Lv_1 ���� ��ȣ
string Caesar_cipher(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        int c; // ���� ���� ���� ����
        if (s[i] >= 'a' && s[i] <= 'z') { // char�� �ִ�� �޴� ���� 128�̹Ƿ� ������ ���.
            c = s[i] + n; // int������ �޾��ص�
            if (c > 'z') c -= 26; // char���� �ִ� ��ġ�� �����ʵ��� ���ִ� �۾�
            s[i] = (char)c; //int���� char�� ��ȯ.
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