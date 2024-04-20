#include <iostream>
using namespace std;
/*只需要知道前一步*/
int main()
{
    int direction=0;/*一開始面相東 0,1,2,3 對應東南西北*/
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
    for(int i=1; i<n; i++)//為了讓i-1存在
    {
       if(direction==0)//東
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//往右,看y的考已不用寫
            {
                //直走
            }
            else if(a[i-1][0]>a[i][0] )// 往左
            {
                //迴轉
                c++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// 往上
            {
                //左轉
                d++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// 往下
            {
                //右轉
                b++;
                direction=1;
            }
       } 
       else if(direction==1)//南
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//往右,看y的考已不用寫
            {
                //左轉
                d++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// 往左
            {
                //右轉
                b++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// 往上
            {
                //迴轉
                c++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// 往下
            {
                //直走
            }  
       }
       else if(direction==2)//西
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//往右,看y的考已不用寫
            {
                //迴轉
                c++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// 往左
            {
                //直走
            }
            else if(a[i-1][1]<a[i][1] )// 往上
            {
                //右轉
                b++;
                direction=3;
            }
            else if(a[i-1][1]>a[i][1] )// 往下
            {
                //左轉
                d++;
                direction=1;
            }
       }
       else if(direction==3)//北
       {
            if(a[i-1][0]<a[i][0] && a[i-1][1]==a[i][1])//往右,看y的考已不用寫
            {
                //右轉
                b++;
                direction=0;
            }
            else if(a[i-1][0]>a[i][0] )// 往左
            {
                //左轉
                d++;
                direction=2;
            }
            else if(a[i-1][1]<a[i][1] )// 往上
            {
                //直走
            }
            else if(a[i-1][1]>a[i][1] )// 往下
            {
                //迴轉
                c++;
                direction=1;
            }
       }
    }
    cout<<d<<" "<<b<<" "<<c;
}
/*
先看東南西北
在看上下左右
(4,0)  d=0
(4,9)  d=3
(4,8)  d=1
(4,10) d=3
(4,2)  d=1
(4,3)  d=
*/