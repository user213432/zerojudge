#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[20]={};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    int below=0;
    int cbelow=0;
    int above=100;
    int cabove=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<60)
        {
            if(a[i]>=below)
            {
                below=a[i];
                cbelow++;
            }
        }
        if(a[i]>=60 && a[i]<=100)
        {
            if(above>a[i])
            {
                above=a[i];              
            }
            cabove++;//重點在這
        } 
    }
    if(cabove==n)
    {
        cout<<"best case";
        cout<<endl;
        cout<<above;
    }
    else if(cbelow==n)
    {
        cout<<below<<endl;
        cout<<"worst case";
    }
    else
    {
        cout<<below<<endl;
        cout<<above;
    }
}

/*
內容
一次考試中，於所有及格學生中獲取最低分數者最為幸運，反之，於所有不及格同學中，獲取最高分數者，可以說是最為不幸，而此二種分數，可以視為成績指標。

請你設計一支程式，讀入全班成績(人數不固定)，請對所有分數進行排序，並分別找出不及格中最高分數，以及及格中最低分數。

當找不到最低及格分數，表示對於本次考試而言，這是一個不幸之班級，此時請你印出「worst case」；反之，當找不到最高不及格分數時，請你印出「best case」。

( 註：假設及格分數為 60 )。


輸入說明
第一行輸入學生人數，第二行為各學生分數(0~100 間)，分數與分數之間以一個空白間格。
每一筆測資的學生人數為 1~20 的整數。


輸出說明
每筆測資輸出三行。

第一行由小而大印出所有成績，兩數字之間以一個空白間格，最後一個數字後無空白；
第二行印出最高不及格分數，如果全數及格時，於此行印出 best case ；
第三行印出最低及格分數，如果全數不及格時，於此行印出 worst case 。

範例輸入 #1
10
0 11 22 33 55 66 77 99 88 44
範例輸出 #1
0 11 22 33 44 55 66 77 88 99
55
66
範例輸入 #2
1
13
範例輸出 #2
13
13
worst case
範例輸入 #3
2
73 65
範例輸出 #3
65 73
best case
65

提示 ：
第一筆說明：不及格分數最高為 55，及格分數最低為 66。

第二筆說明：由於找不到最低及格分數，因此第三行須印出「worst case」。

第三題說明：由於找不到最高不及格分數，因此第二行須印出「best case」。
*/
