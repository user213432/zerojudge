#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[2000000]={};
    int b;
    int c;
    for(int i=0; i<n; i++)
    {
        cin>>b>>c;
        for(int j=b; j<=c; j++)
        {
            if(a[j]>=1)
            {
                break;
            }
            else
            {
                a[j]++;
            }
        }
    }
    int count=0;
    for(int i=0; i<2000000; i++)
    {
        if(a[i]==1)
        {
           count++;
        }
        
    }
    cout<<count;
}
/*
�Ĥ@�C�O�@�ӥ���� N �A��ܦ����꦳ N �ӽu�q�C
���۪� N �C�C�@�C�O�@�ӽu�q���}�l���I�y�о�ƭ� L �M�������I�y�о�ƭ� R �A�}�l���I�y�ЭȤp�󵥩󵲧����I�y�ЭȡA��̤����H�@�ӪŮ�Ϲj�C

 

�䤤  30%�����꺡���A N < 100 �A 0 ? L , R < 1000 �A�åB�u�q�S�����|�C
�䤤  70%�����꺡���A N < 100 �A 0 ? L , R < 1000 �A�åB�u�q�i�୫�|�C
�䤤100%�����꺡���A N < 10000 �A 0 ? L , R < 10000000 �A�åB�u�q�i�୫�|�C


��X����
��X���`�л\�����סC

���D���Y����A�аȥ����ӻ����i���X�C


�d�ҿ�J #1
��J�d�Ҥ@�G
5
160 180
150 200
280 300
300 330
190 210

��J�d�ҤG�G
1
120 120
�d�ҿ�X #1
��X�d�Ҥ@�G
110

��X�d�ҤG�G
0
*/