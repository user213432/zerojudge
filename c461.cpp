#include <iostream>
using namespace std;
int main()
{
    unsigned int a,b;
    int c;
    cin>>a>>b>>c;
    bool d=true;
    if(c==0 )
    {
        if((a==0) || (b==0))
        {
            cout<<"AND"<<endl;
            d=false;
        }
        if(a==0 && b==0)
        {
            cout<<"OR"<<endl;
            d=false;
        }
        if((a!=0 && b!=0) || (a==0 && b==0))
        {
            cout<<"XOR";
            d=false;
        }   
        if(d==true)
        {
            cout<<"IMPOSSIBLE";
        }
    }
    if(c==1)
    {
        if(a!=0 && b!=0)
        {
            cout<<"AND"<<endl;
            d=false;
        }
        if((a!=0) || (b!=0))
        {
            cout<<"OR"<<endl;
            d=false;
        }
        if((a!=0 && b==0) || (a==0 && b!=0))
        {
            cout<<"XOR";
            d=false;
        }
        if(d==true)
        {
            cout<<"IMPOSSIBLE";
        }
    }
}
/*
��J����
��J�u���@��A�@�T�Ӿ�ƭȡA��ƶ��H�@�Ӫťչj�}�C
�Ĥ@�Ӿ�ƥN�� a�A�ĤG�Ӿ�ƥN�� b�A�o��Ƨ����D�t����ơC
�ĤT�Ӿ�ƥN���޿�B�⪺���G�A�u�|�O 0 �� 1�C

��X����
��X�i��o����w���G���B��A�Y���h�ӡA��X���Ǭ�AND�BOR�BXOR�A�C�ӥi�઺�B���W��X�@��A�C�浲���Ҧ�����C

�Y���i��o����w���G�A��XIMPOSSIBLE�C

�]�`�N��X�ɩҦ��^��r�������j�g�r���C�^

�d�ҿ�J #1
�d�Ҥ@�G
0 0 0 

�d�ҤG�G
1 1 1 

�d�ҤT�G
3 0 1

�d�ҥ|�G
0 0 1  
�d�ҿ�X #1
�d�Ҥ@�G
AND 
OR 
XOR

�d�ҤG�G
AND 
OR 

�d�ҤT�G
OR 
XOR 

�d�ҥ|�G
IMPOSSIBLE */