#include <iostream>
using namespace std;
int main()
{
    int n;
    int x[101];
    int sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<n; i++)
    {
        if(x[i]==0)
        {
            if(i==0)
            {
                sum+=x[1];
            }
            else if(i==n-1)
            {
                sum+=x[n-2];
            }
            else//(x[i-1]<x[i+1])
            {
                if(x[i-1]<x[i+1])
                {
                   sum+=x[i-1]; 
                }
                else
                {
                    sum+=x[i+1];
                }
            }
            
        }
    }
    cout<<sum;
}
/*���@�ӹA�����e�׬� 
 �����X, �C�ӳ��X�����U�۪����� 

���ǳ��X�Q�j�_�F�A�A���D�H�n�ӭ׸ɳo�ǳ��X�A���L�ѰO�o���a�������X�쥻���׬O�h�֡A���F��֦����A�L�|���_�������X��m�۾F����M�k����p�����Ӱ��׶�W�h�A�ݻݭn�h�֦���

�D�ثO�Ҥ��|����Ӭ۾F���j�_���X�A�Ӭ��_�����X���i���b���

��J����
��J�]�t���

�Ĥ@�榳�@�ӥ���� 

�ĤG�榳 
 �ӥH�Źj���j����� 

 

�Ʀr�d��

- 

- 


�l�D�t��
- (60%): n = 3
- (40%): �L�B�~����

��X����
��X�@�ӥ���ƪ�ܷs�W�����X�����`�M

�d�ҿ�J #1
3
2 0 4
�d�ҿ�X #1
2
�d�ҿ�J #2
9
0 5 3 0 6 4 0 1 0
�d�ҿ�X #2
10*/