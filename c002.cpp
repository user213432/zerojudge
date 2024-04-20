#include <iostream>
#include <cmath>
using namespace std;

long long int f91(int N)
{
    if(N <= 100 )
    {
        return  f91( f91( N+11) );
    }
    if(N >= 101)
    {
        return N-10;
    }
}
int main()
{
    int a;
    while(true)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }
        cout<<"f91("<<a<<") = "<<f91(a)<<endl;
    } 
}








/*McCarthy�O�@�Ӧ��W����T�M�a�C�L�w�q�F�@�ӻ��j����ƥs�� f91 �C����J�@�ӥ����N�åB�̾ڥH�U���W�h�Ǧ^�@�ӥ���ơG

. �p�G N <= 100, ���� f91(N) = f91( f91( N+11) )

. �p�G N >= 101, ���� f91(N) = N-10

�ЧA�g�@�ӵ{���ӭp�� f91

 

��J����
�C�մ��ո�Ƥ@�C�C�t��1�ӥ���� N�] N <= 1000000�^�C��J�̦h��250000�մ��ո�ơC �Y N=0 �N���J�����C

��X����
��C�մ��ո�ƿ�X�@�C f91(N)�A�C��X�榡�аѦ�Sample Output�C

�d�ҿ�J #1
500
91
0
�d�ҿ�X #1
f91(500) = 490
f91(91) = 91*/