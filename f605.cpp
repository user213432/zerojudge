#include <iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int sum=0;
    int count=0;
    bool Yes=false;
    for(int i=0; i<n; i++)
    {
        int tem[3]={};
        int store=0;
        for(int j=0; j<3; j++)
        {
            cin>>tem[j];
        }
        sort(tem,tem+3);//�O��O�Ѥp��j
        if(tem[2]-tem[0]>=d)
        {
            Yes=true;
           sum=(tem[0]+tem[1]+tem[2])/3;
        }
        if(Yes==true)//���i�H�����g�b��21�� ,����count++
        {
            count++;
        }
    }
    cout<<cout<<" "<<sum;
}
