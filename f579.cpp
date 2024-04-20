#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int tem[101][101];
    int store=0;
    for(int i=0; i<n; i++)
    {
        int j=0;        
        while(1)
        {
            cin>>tem[i][j];          
            if(tem[i][j]==0)
            {
                break;
            }
            j++; //所有是做完才加一
        }       
    }
    for(int i=0; i<n; i++)
    {
        int j=0;
        int sum1=0,sum2=0;
        while(1)
        {           
            if(tem[i][j]==0)
            {
                break;
            }
            if(tem[i][j]==a )
            {
                sum1++;
            }
            if(tem[i][j]==a*(-1) )
            {
                sum1--;
            }
            if(tem[i][j]==b )
            {
                sum2++;
            }
            if(tem[i][j]==b*(-1) )
            {
                sum2--;
            }
            
            j++;
            
        }
        if(sum1>0 && sum2>0)
        {
            store++;
        }        
    }
    cout<<store;
}
