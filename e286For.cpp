#include <iostream>
using namespace std;
int main()
{
    int x[4][4];
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>x[i][j];

        }
    }
    for(int i=0; i<4; i++)
    {
        a=a+x[0][i];
    }
    for(int i=0; i<4; i++)
    {
        b=b+x[1][i];
    }
    for(int i=0; i<4; i++)
    {
        c=c+x[2][i];
    }
    for(int i=0; i<4; i++)
    {
        d=d+x[3][i];
    }
    cout<<a<<":"<<b<<endl;
    cout<<c<<":"<<d<<endl;
    if(a>b && c>d)
    {
        cout<<"Win";
    }
    else if(b>a && d>c)
    {
        cout<<"Lose";
    }
    else
    {
        cout<<"Tie";
    }
}



/*APCS���F�@���x�y�p�ɡA�䤤���C�@�����D���P�ȶ��C
�A�����ȬO�N�C�@�����ɪ���T����²�T��X�C

��J����
�浧��J

�@���|��Ʀr�A�N��������
�C�榳�|�ӼƦr�A�N��|��������
�Ĥ@��N��D���b�Ĥ@�����ɤ��|��������
�ĤG��N��ȶ��b�Ĥ@�����ɤ��|��������
�ĤT��N��D���b�ĤG�����ɤ��|��������
�ĥ|��N��ȶ��b�ĤG�����ɤ��|��������

 �Ҧ��Ʀr������ 0 ~ 100 ����

��X����
��C�@�����ɿ�X�D���P�ȶ������
�̫��X������ɪ��ӱѱ��p
�p�G�D��Ĺ�F�����X "Win"
�p�G�ȶ�Ĺ�F�����X "Lose"
����h��X "Tie"
�O�Ҥ��|���P�����p�X�{�A�C�����|���X�ӭt

�d�ҿ�J #1
87 87 87 87
78 78 78 78
87 87 87 87
78 78 78 78
�d�ҿ�X #1
348:312
348:312
Win*/