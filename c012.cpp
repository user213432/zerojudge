#include <bits/stdc++.h>
using namespace std;
struct node
{
    char
    int 
}
bool cmp(int a, int b)

int main()
{
    string s;
    while(getline(cin,s))
    {
        int a[128]={};
        for(int i=0; i<s.length();i++)//是要看這個字串的每個字元各出現幾次
        {
            a[s[i]]++;  //s[i] 本身就是數字
        }
        for(int i=0; i<128; i++)
        {
            if(a[i]!=0)
            {
                cout<<i<<" "<<a[i]<<endl;
            }
        }
    }

}