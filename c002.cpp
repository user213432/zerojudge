#include <iostream>
#include <cmath>
using namespace std;

long long int f91(int N)
{
    if(N <= 100 )
    {
        return  f91( f91( N+11) );
    }
    if(N >= 101)
    {
        return N-10;
    }
}
int main()
{
    int a;
    while(true)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }
        cout<<"f91("<<a<<") = "<<f91(a)<<endl;
    } 
}








/*McCarthy是一個有名的資訊專家。他定義了一個遞迴的函數叫做 f91 。它輸入一個正整數N並且依據以下的規則傳回一個正整數：

. 如果 N <= 100, 那麼 f91(N) = f91( f91( N+11) )

. 如果 N >= 101, 那麼 f91(N) = N-10

請你寫一個程式來計算 f91

 

輸入說明
每組測試資料一列。含有1個正整數 N（ N <= 1000000）。輸入最多有250000組測試資料。 若 N=0 代表輸入結束。

輸出說明
對每組測試資料輸出一列 f91(N)，。輸出格式請參考Sample Output。

範例輸入 #1
500
91
0
範例輸出 #1
f91(500) = 490
f91(91) = 91*/