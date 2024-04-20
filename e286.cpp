#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;


int main()
{
    int winCount = 0; //主隊贏幾場

    for(int i = 0; i < 2; i++)
    {
        int a = 0; //主隊的分數
        int b = 0; //客隊的分數
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