#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int a[50];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    
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
        cout<<left<<" "<<right<<endl;
    }
    
}
/*1  a[0]+a[1]
2  a[0]+a[1]+a[2]+a[3]
3  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]
4  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]
2  a[2]+a[3]+a[4]+a[5]+a[6]
6  a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]*/
