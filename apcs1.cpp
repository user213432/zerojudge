#include <iostream>
using namespace std;
/*�u�ݭn���D�e�@�B*/
int main()
{
    int direction=0;/*�@�}�l���۪F 0,1,2,3 �����F�n��_*/
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    int d=0;
    int b=0;
    int c=0;
    for(int i=1; i<n; i++)//���F��i-1�s�b
    {
       if(direction==0)//�F
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//���k,��y���Ҥw���μg
            {
                //����
            }
            else if(a[i-1][0]>a[i][0] )// ����
            {
                //�j��
                c++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// ���W
            {
                //����
                d++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// ���U
            {
                //�k��
                b++;
                direction=1;
            }
       } 
       else if(direction==1)//�n
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//���k,��y���Ҥw���μg
            {
                //����
                d++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// ����
            {
                //�k��
                b++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// ���W
            {
                //�j��
                c++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// ���U
            {
                //����
            }  
       }
       else if(direction==2)//��
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//���k,��y���Ҥw���μg
            {
                //�j��
                c++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// ����
            {
                //����
            }
            else if(a[i-1][1]<a[i][1] )// ���W
            {
                //�k��
                b++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// ���U
            {
                //����
                d++;
                direction=1;
            }
       }
       else if(direction==3)//�_
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//���k,��y���Ҥw���μg
            {
                //�k��
                b++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// ����
            {
                //����
                d++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// ���W
            {
                //����
            }
            else if(a[i-1][1]>a[i][1] )// ���U
            {
                //�j��
                c++;
                direction=1;
            }
       }
    }
    cout<<d<<" "<<b<<" "<<c;
}
/*
���ݪF�n��_
�b�ݤW�U���k
(4,0)  d=0
(4,9)  d=3
(4,8)  d=1
(4,10) d=3
(4,2)  d=1
(4,3)  d=
*/