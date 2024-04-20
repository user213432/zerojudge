#include <iostream>
using namespace std;
int main()
{
        
        string s;
        cin>>s;
        for(int i=0; i<6; i++)
        {
            int a=s[i]-s[i+1];
            if(a<0)
            {
                a=a*-1;
            }
            cout<<a;
        }
        
    //cin.getline//
}
/*輸入說明
輸入只有一行，含有 7 個相連的大寫英文字母。

輸出說明
輸出文文的提款卡密碼。(我知道，我不會讓其他的人看到！)

範例輸入 #1
POKEMON
範例輸出 #1
146821
範例輸入 #2
TYPHOON
範例輸出 #2
598701*/