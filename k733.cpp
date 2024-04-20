#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()//第一子題
{
    string s;
    cin>>s;
    int tem=10;
    int total=0;
    //有空格才會用到getline()
    for(int i=0; i<s.length(); i=i+3)
    {
        int sum=(s[i+1]-'0')*10+(s[i+2]-'0');      
        total+=abs(tem-sum);
        tem=sum;
    }
    cout<<total;
}