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
        for(int i=0; i<s.length();i++)//�O�n�ݳo�Ӧr�ꪺ�C�Ӧr���U�X�{�X��
        {
            a[s[i]]++;  //s[i] �����N�O�Ʀr
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