#include <iostream>
using namespace std;
int main()
{
    int a,b;
    bool c= true;
    int n,d;
    cin>>n>>d;
    int tem[100];
    for(int i=0; i<n; i++)
    {
        cin>>tem[i];
    }
    a=tem[0];
    for(int i=1; i<n; i++)
    {
       if(tem[i]>=a+d && c==true)
       {
            b=tem[i]-a;
            a=tem[i];
            c=false;
       }
       if(c=false && tem[i]<=a-d)
       {
           b=b-tem[i];
           a=tem[i];
           c=true;
       }
    }
}