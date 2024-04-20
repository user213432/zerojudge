#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    string x; //此題 long long int 不夠到1000位//
    long long int a=0;
    long long int b=0;
    cin>>x;
    for(int i=0; i<x.length(); i=i+2)
    {
        a=a+x[i]-'0'; 
    //    cout<<a<<endl; 到處cout隨時檢查變數的值//
    }
    for(int i=1; i<x.length(); i=i+2) //int 對 unsigned int//
    {
        b=b+x[i]-'0';   //asci code '0'等於int 的48//      
    }
    if(a-b>=0)
    {
        cout<<a-b;    //絕對值算法//
    }
    else
    {
        cout<<b-a;
    }
}
/*內容
問題描述

將一個十進位正整數的奇數位數的和稱為A ，偶數位數的和稱為B，則A與B的絕對差值 |A －B| 稱為這個正整數的秘密差。

例如： 263541 的奇數位和 A = 6+5+1 =12，偶數位的和 B = 2+3+4 = 9 ，所以 263541 的秘密差是 |12 －9|= 3 。

給定一個 十進位正整數 X，請找出 X的秘密差。

原題pdf檔

輸入說明
輸入為一行含有一個十進位表示法的正整數X，之後是一個換行字元。

 

輸出說明
請輸出 X的秘密差 Y(以十進位表示法輸出 )，以換行字元結尾 。

範例輸入 #1
263541
範例輸出 #1
3
範例輸入 #2
131
範例輸出 #2
1*/