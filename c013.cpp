#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    int f;
    cin>>n;
    
    for(int i=0; i<n; i++)//�X��
    {
        cin>>a>>f;
        for(int j=0; j<f; j++)//�W�v
        {  
            for(int k=1; k<=a; k++)
            {
               for(int m=1; m<k+1; m++)//k����ƪ����ۦ�m�����X����
               {
                    cout<<k;
               }           
               cout<<endl;                     
            }
            for(int k=a-1; k>0; k--)//������
            {
                for (int m=k; m>0; m--)//�����X����
                {
                    cout<<k;
                }  
                cout<<endl;            
            }
            cout<<endl;//�C��X���@���N�n�Ť@��
        }
        
    }
}