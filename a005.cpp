#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[20][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<1; j++)
        {
            if(a[i][j+1]-a[i][j]==a[i][j+3]-a[i][j+2])
            {
                int d=a[i][j+1]-a[i][j];
                a[i][4]=a[i][3]+d;
            }
            else 
            {
                int f=a[i][j+1]/a[i][j];
                a[i][4]=a[i][3]*f;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}