#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[20];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    /*
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "
    }
    */
    cout<<a[0];
    for(int i=1; i<n; i++)
    {
        cout<<" "<<a[i];
    }

    bool unlucky=true;//����̰����ή�
    bool lucky=true;
    int low=-10000;
    int high=10000;
    for(int i=0; i<n; i++)
    {
        if(a[i]<60)
        {
            if(low<a[i])
            {
                low=a[i];
                unlucky=false;
            }
        }
        if(a[i]>=60)
        {
            if(high>a[i])
            {
                high=a[i];
                lucky=false;
            }
        }
    }
    cout<<endl;
    if(unlucky==false)
    {
        cout<<low<<endl;
    }
    else
    {
        cout<<"best case"<<endl;
    }
    if(lucky==false)
    {
        cout<<high;
    }
    else
    {
        cout<<"worst case";
    }
}
/*
�@���Ҹդ��A��Ҧ��ή�ǥͤ�����̧C���ƪ̳̬����B�A�Ϥ��A��Ҧ����ή�P�Ǥ��A����̰����ƪ̡A�i�H���O�̬������A�Ӧ��G�ؤ��ơA�i�H�������Z���СC

�ЧA�]�p�@��{���AŪ�J���Z���Z(�H�Ƥ��T�w)�A�й�Ҧ����ƶi��ƧǡA�ä��O��X���ή椤�̰����ơA�H�Τή椤�̧C���ơC

���䤣��̧C�ή���ơA���ܹ�󥻦��ҸզӨ��A�o�O�@�Ӥ������Z�šA���ɽЧA�L�X�uworst case�v�F�Ϥ��A���䤣��̰����ή���ƮɡA�ЧA�L�X�ubest case�v�C

( ���G���]�ή���Ƭ� 60 )�C


��J����
�Ĥ@���J�ǥͤH�ơA�ĤG�欰�U�ǥͤ���(0~100 ��)�A���ƻP���Ƥ����H�@�Ӫťն���C
�C�@�����ꪺ�ǥͤH�Ƭ� 1~20 ����ơC


��X����
�C�������X�T��C

�Ĥ@��Ѥp�Ӥj�L�X�Ҧ����Z�A��Ʀr�����H�@�Ӫťն���A�̫�@�ӼƦr��L�ťաF
�ĤG��L�X�̰����ή���ơA�p�G���Ƥή�ɡA�󦹦�L�X best case �F
�ĤT��L�X�̧C�ή���ơA�p�G���Ƥ��ή�ɡA�󦹦�L�X worst case �C

�d�ҿ�J #1
10
0 11 22 33 55 66 77 99 88 44
�d�ҿ�X #1
0 11 22 33 44 55 66 77 88 99
55
66
�d�ҿ�J #2
1
13
�d�ҿ�X #2
13
13
worst case
�d�ҿ�J #3
2
73 65
�d�ҿ�X #3
65 73
best case
65

���� �G
�Ĥ@�������G���ή���Ƴ̰��� 55�A�ή���Ƴ̧C�� 66�C

�ĤG�������G�ѩ�䤣��̧C�ή���ơA�]���ĤT�涷�L�X�uworst case�v�C

�ĤT�D�����G�ѩ�䤣��̰����ή���ơA�]���ĤG�涷�L�X�ubest case�v�C
*/