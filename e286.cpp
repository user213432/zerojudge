#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;


int main()
{
    int winCount = 0; //�D��Ĺ�X��

    for(int i = 0; i < 2; i++)
    {
        int a = 0; //�D��������
        int b = 0; //�ȶ�������
        for(int i = 0; i < 4; i++)
        {
            int t;
            cin >> t;
            a += t;
        }
        for(int i = 0; i < 4; i++)
        {
            int t;
            cin >> t;
            b += t;
        }
cout << a << ":" << b << endl;
        if(a > b)
        {
            winCount++;
        }
    }
    if(winCount == 2)
    {
        cout << "Win";
    }
    else if(winCount == 1)
    {
        cout << "Tie";
    }
    else if(winCount == 0)
    {
        cout << "Lose";
    }
}