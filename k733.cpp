#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()//�Ĥ@�l�D
{
    string s;
    cin>>s;
    int tem=10;
    int total=0;
    //���Ů�~�|�Ψ�getline()
    for(int i=0; i<s.length(); i=i+3)
    {
        int sum=(s[i+1]-'0')*10+(s[i+2]-'0');      
        total+=abs(tem-sum);
        tem=sum;
    }
    cout<<total;
}