#include <iostream>
using namespace std;
int main()
{
    
    long long int a1,b1,c1,a2,b2,c2,n;
    long long int y1=0, y2=0;
    long long int sum=0,tem=0; //sum的初始化若是零,a1 b1 c1皆可為-3 y1則可能變成負數
    cin>>a1>>b1>>c1>>a2>>b2>>c2>>n;
    for(int i=0; i<=n; i++)
    {
        y1=a1*i*i+b1*i+c1;
        y2=a2*(n-i)*(n-i)+b2*(n-i)+c2;
        tem=y1+y2;
        if(tem>sum)
        {
            sum=tem;
        }
    }
    cout<<sum;
}