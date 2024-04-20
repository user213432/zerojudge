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
            if(times[i]==1)//翻轉
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
輸入說明
輸入包含多筆測資。

每筆側資中，
第一行有三個介於 1~10 之間的正整數 R, C, M 。
接下來有 R 行(line)是 矩陣B 的 內容，每一行(line)都包含 C 個正整數，其中的第 i 行第 j 個數字代表 矩陣Bij 的值。
在矩陣內容後的一行有 M 個整數，表示對 矩陣A 進行的操作。
第 k 個整數 mk 代表第 k 個操作，如果 mk = 0 則代表旋轉， mk = 1 則代表翻轉。
同一行的數字之間都是以一個空白間格，且矩陣內容為 0~9 的整數。

 

其中  30%的測資滿足，每個操作都是翻轉。
其中100%的測資滿足，操作有翻轉也有旋轉。


輸出說明
每筆測資輸出包含兩個部分。

第一個部分有一行，包含兩個正整數 R' 和 C' ，以一個空白隔開，分別代表 矩陣A 的列數和行數。
接下來有 R' 行，每一行都包含 C' 個正整數，且每一行的整數之間以一個空白隔開，其中第 i 行的第 j 個數字代表 矩陣Aij 的值。
每一行的最後一個數字後並無空白。

本題為嚴格比對，請務必按照說明進行輸出。


範例輸入 #1
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
範例輸出 #1
3 2
1 1
1 3
2 1
2 3
2 1 3
1 2 3

*/