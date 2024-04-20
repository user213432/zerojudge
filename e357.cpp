#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

long long int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    else if(x%2==0)
    {
        return F(x/2);
    }
    else
    {
        return  F(x - 1) + F(x + 1);
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<F(a);
}
/*�w�q�@�Ө��F(x)�A

�Yx = 1, �h F(x) = 1
�Yx �����ơA�h F(x) = F(x/2)

��l���p�AF(x) = F(x - 1) + F(x + 1)

��J����
��J�u���@��A�䤤�]�t�@�ӥ����x (1 <= x <= 2000000)�C

��X����
��X�u���@��A�䤤�]�t�@�ӥ����F(x)�C

�d�ҿ�J #1
6
�d�ҿ�X #1
2
*/