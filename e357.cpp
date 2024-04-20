#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

long long int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    else if(x%2==0)
    {
        return F(x/2);
    }
    else
    {
        return  F(x - 1) + F(x + 1);
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<F(a);
}
/*定義一個函數F(x)，

若x = 1, 則 F(x) = 1
若x 為偶數，則 F(x) = F(x/2)

其餘狀況，F(x) = F(x - 1) + F(x + 1)

輸入說明
輸入只有一行，其中包含一個正整數x (1 <= x <= 2000000)。

輸出說明
輸出只有一行，其中包含一個正整數F(x)。

範例輸入 #1
6
範例輸出 #1
2
*/