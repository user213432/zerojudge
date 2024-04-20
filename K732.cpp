#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int a[50];
    int t[50];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<m; i++)
    {
        int left=i-a[i];
        int right=i+a[i];
        if(left<0)
        {
            left=0;
        }
        if(right>=m-1)
        {
            right=m-1;
        }
        //cout<<left<<" "<<right<<endl;
        int tem=0;
        for(int j=left; j<=right; j++)//left ¥²­n ­Ya[4]==2
        {
            tem+=a[j];
        }
        if(tem%10==a[i])
        {           
           t[sum]=i;
           sum++;      
        }
    }
    cout<<sum<<endl;
    for(int i=0; i<sum; i++)
    {
        cout<<0<<" "<<t[i]<<endl;
    }
}
/*1  a[0]+a[1]
2  a[0]+a[1]+a[2]+a[3]
3  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]
4  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]
2  a[2]+a[3]+a[4]+a[5]+a[6]
6  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]*/
