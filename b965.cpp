#include <iostream>
using namespace std;
int main()
{
    int r;
    int c;
    int m;
    while(cin>>r>>c>>m)
    {
        int a[10][10];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>a[i][j];
            }
        }
        int times[10];
        for(int i=0; i<m; i++)
        {
            cin>>times[i];
        }
        int tem[10][10];
        for(int i=m-1; i>=0; i--)
        {
            if(times[i]==1)//½��
            {                
                    for(int j=0; j<r/2; j++)
                    {
                        for(int k=0; k<c; k++)
                        {
                            swap(a[j][k],a[r-1-j][k]);
                        }

                    }     
            }       
            else if(times[i]==0)
            {
                for(int j=0; j<r; j++)
                {
                    for(int k=0; k<c; k++)
                    {
                        tem[j][k]=a[j][k];
                    }
                }
                //
                for(int j= 0; j < c; j++)
                {
                    for(int k = 0; k < r; k++)
                    {
                        a[j][k] = tem[k][c-1-j];
                    }
                }
                swap(r,c);

            }        

        }
        cout<<r<<" "<<c<<endl;
        for(int i=0; i<r; i++)
        {
            cout<<a[i][0];
            for(int j=1; j<c; j++ )
            {
                cout<<" "<<a[i][j];
            }
            cout<<endl;
        }

    }
}
/*
��J����
��J�]�t�h������C

�C�����ꤤ�A
�Ĥ@�榳�T�Ӥ��� 1~10 ����������� R, C, M �C
���U�Ӧ� R ��(line)�O �x�}B �� ���e�A�C�@��(line)���]�t C �ӥ���ơA�䤤���� i ��� j �ӼƦr�N�� �x�}Bij ���ȡC
�b�x�}���e�᪺�@�榳 M �Ӿ�ơA��ܹ� �x�}A �i�檺�ާ@�C
�� k �Ӿ�� mk �N��� k �Ӿާ@�A�p�G mk = 0 �h�N�����A mk = 1 �h�N��½��C
�P�@�檺�Ʀr�������O�H�@�Ӫťն���A�B�x�}���e�� 0~9 ����ơC

 

�䤤  30%�����꺡���A�C�Ӿާ@���O½��C
�䤤100%�����꺡���A�ާ@��½��]������C


��X����
�C�������X�]�t��ӳ����C

�Ĥ@�ӳ������@��A�]�t��ӥ���� R' �M C' �A�H�@�Ӫťչj�}�A���O�N�� �x�}A ���C�ƩM��ơC
���U�Ӧ� R' ��A�C�@�泣�]�t C' �ӥ���ơA�B�C�@�檺��Ƥ����H�@�Ӫťչj�}�A�䤤�� i �檺�� j �ӼƦr�N�� �x�}Aij ���ȡC
�C�@�檺�̫�@�ӼƦr��õL�ťաC

���D���Y����A�аȥ����ӻ����i���X�C


�d�ҿ�J #1
3 2 3
1 1
3 1
1 2
1 0 0
3 2 2
3 3
2 1
1 2
0 1
�d�ҿ�X #1
3 2
1 1
1 3
2 1
2 3
2 1 3
1 2 3

*/