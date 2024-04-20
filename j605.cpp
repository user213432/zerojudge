#include <iostream>
using namespace std;
int main()
{
    int total=-50;
    int k;
    int error=0;
    int time=0;
    cin>>k;
    int a;//時間
    int b;//分數
    bool com=false;
    for(int i=0; i<k; i++)
    {
        cin>>a>>b;
        if(b==-1)
        {
            error++;
        }
        else if(b>total)
        {
            total=b;
            time=a;              
        }
    }
    int ans=total-k-error*2;
    if(ans<0)
    {
        cout<<0<<" "<<time;
    }
    else
    {
        cout<<ans<<" "<<time;
    }
}
/*
給 
 個提交紀錄，第 
 個提交紀錄有兩個整數 
 和 
 代表上傳時間和該次上傳的分數，若第 
 次的提交結果為嚴重錯誤，則 
 為 
。

計算總分的公式為 提交紀錄中的最高分 - 總提交次數 - 總嚴重錯誤次數 * 2，若計算出來的分數為負數則計為 
。

請輸出總分和第一次獲得最高分的時間點。

輸入說明
第一行有一個正整數 
 代表提交的次數，接下來有 
 行，第 
 行有兩個整數 
 和 
。保證提交紀錄按照時間點嚴格遞增排序，並且第一個提交紀錄不會是嚴重錯誤。

(60 分): 

(40 分): 無其他限制

輸出說明
輸出兩個整數，代表總分和第一次獲得最高分的時間點。

範例輸入 #1
5
3 89
5 -1
10 90
15 0
20 90
範例輸出 #1
83 10
範例輸入 #2
3
3 0
5 -1
6 -1
範例輸出 #2
0 3
*/