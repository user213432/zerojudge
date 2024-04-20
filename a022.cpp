#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a="";
     
    for(int i=s.length()-1; i>=0 ;i-- )
    {
        a+=s[i];
    }
    if(s==a)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    /*for(int i=1; i-1<s.length(); i++)
    {
        //cout<<s[s.length()-i];//
        a+=s[s.length()-i];
    }
    cout<<a;*/
}
/*內容
迴文的定義為正向，反向讀到的字串均相同

如：abba , abcba ... 等就是迴文

 請判斷一個字串是否是一個迴文？

輸入說明
輸入資料共一行包含一個字串(長度 < 1000)

輸出說明
針對每一行輸入字串輸出 yes or no

範例輸入 #1
abba
範例輸出 #1
yes
範例輸入 #2
abcd
範例輸出 #2
no*/