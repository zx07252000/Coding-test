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