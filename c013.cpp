#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    int f;
    cin>>n;
    
    for(int i=0; i<n; i++)//碭舱
    {
        cin>>a>>f;
        for(int j=0; j<f; j++)//繵瞯
        {  
            for(int k=1; k<=a; k++)
            {
               for(int m=1; m<k+1; m++)//k北计τm北块Ω计
               {
                    cout<<k;
               }           
               cout<<endl;                     
            }
            for(int k=a-1; k>0; k--)//北︽计
            {
                for (int m=k; m>0; m--)//北块Ω计
                {
                    cout<<k;
                }  
                cout<<endl;            
            }
            cout<<endl;//–块ЧΩ碞璶︽
        }
        
    }
}