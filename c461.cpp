#include <iostream>
using namespace std;
int main()
{
    unsigned int a,b;
    int c;
    cin>>a>>b>>c;
    bool d=true;
    if(c==0 )
    {
        if((a==0) || (b==0))
        {
            cout<<"AND"<<endl;
            d=false;
        }
        if(a==0 && b==0)
        {
            cout<<"OR"<<endl;
            d=false;
        }
        if((a!=0 && b!=0) || (a==0 && b==0))
        {
            cout<<"XOR";
            d=false;
        }   
        if(d==true)
        {
            cout<<"IMPOSSIBLE";
        }
    }
    if(c==1)
    {
        if(a!=0 && b!=0)
        {
            cout<<"AND"<<endl;
            d=false;
        }
        if((a!=0) || (b!=0))
        {
            cout<<"OR"<<endl;
            d=false;
        }
        if((a!=0 && b==0) || (a==0 && b!=0))
        {
            cout<<"XOR";
            d=false;
        }
        if(d==true)
        {
            cout<<"IMPOSSIBLE";
        }
    }
}
/*
輸入說明
輸入只有一行，共三個整數值，整數間以一個空白隔開。
第一個整數代表 a，第二個整數代表 b，這兩數均為非負的整數。
第三個整數代表邏輯運算的結果，只會是 0 或 1。

輸出說明
輸出可能得到指定結果的運算，若有多個，輸出順序為AND、OR、XOR，每個可能的運算單獨輸出一行，每行結尾皆有換行。

若不可能得到指定結果，輸出IMPOSSIBLE。

（注意輸出時所有英文字母均為大寫字母。）

範例輸入 #1
範例一：
0 0 0 

範例二：
1 1 1 

範例三：
3 0 1

範例四：
0 0 1  
範例輸出 #1
範例一：
AND 
OR 
XOR

範例二：
AND 
OR 

範例三：
OR 
XOR 

範例四：
IMPOSSIBLE */