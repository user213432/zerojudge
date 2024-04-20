#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int X1=b*b-4*a*c;
    int X2;
    X2=b*b-4*a*c;
    if(b*b-4*a*c>0)
    {
        cout<<"Two different roots "<<"x1="<<(-b+sqrt( X1 ))/(2*a)<<" , "<<"x2="<<(-b-sqrt( X2))/(2*a);
    }
    if(b*b-4*a*c==0)
    {
        cout<<"Two same roots "<<"x="<<(-b+sqrt( X1 ))/(2*a);
    }
    if(b*b-4*a*c<0)
    {
        cout<<"No real root ";
    }

}