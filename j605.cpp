#include <iostream>
using namespace std;
int main()
{
    int total=-50;
    int k;
    int error=0;
    int time=0;
    cin>>k;
    int a;//�ɶ�
    int b;//����
    bool com=false;
    for(int i=0; i<k; i++)
    {
        cin>>a>>b;
        if(b==-1)
        {
            error++;
        }
        else if(b>total)
        {
            total=b;
            time=a;              
        }
    }
    int ans=total-k-error*2;
    if(ans<0)
    {
        cout<<0<<" "<<time;
    }
    else
    {
        cout<<ans<<" "<<time;
    }
}
/*
�� 
 �Ӵ�������A�� 
 �Ӵ����������Ӿ�� 
 �M 
 �N��W�Ǯɶ��M�Ӧ��W�Ǫ����ơA�Y�� 
 �������浲�G���Y�����~�A�h 
 �� 
�C

�p���`���������� ������������̰��� - �`���榸�� - �`�Y�����~���� * 2�A�Y�p��X�Ӫ����Ƭ��t�ƫh�p�� 
�C

�п�X�`���M�Ĥ@����o�̰������ɶ��I�C

��J����
�Ĥ@�榳�@�ӥ���� 
 �N���檺���ơA���U�Ӧ� 
 ��A�� 
 �榳��Ӿ�� 
 �M 
�C�O�Ҵ���������Ӯɶ��I�Y�滼�W�ƧǡA�åB�Ĥ@�Ӵ���������|�O�Y�����~�C

(60 ��): 

(40 ��): �L��L����

��X����
��X��Ӿ�ơA�N���`���M�Ĥ@����o�̰������ɶ��I�C

�d�ҿ�J #1
5
3 89
5 -1
10 90
15 0
20 90
�d�ҿ�X #1
83 10
�d�ҿ�J #2
3
3 0
5 -1
6 -1
�d�ҿ�X #2
0 3
*/