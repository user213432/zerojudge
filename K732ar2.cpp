#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int a[50][50];
    int one[2500][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int total=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            //cout<<i-a[i][j]<<" "<<j-a[i][j]<<" , "<<i+a[i][j]<<" "<<j+a[i][j]<<endl;
            int up=i-a[i][j];//控制row往上
            int left=j-a[i][j];//控制column
            
            int down=i+a[i][j];
            int right=j+a[i][j];
            if(up<0)
            {
                up=0;
            }
            if(left<0)
            {
                left=0;
            }
            if(down>=n)
            {
                down=n-1;
            }
            if(right>=m)
            {
                right=m-1;
            }
            //cout<<up<<" "<<left<<" , "<<down<<" "<<right<<endl;
            int sum=0;
            for(int k=up; k<=down; k++)//縱軸的移動 由上到下
            {
                for(int l=left; l<=right; l++ )//橫軸的移動
                {
                    
                    if(abs(i-k)+abs(l-j)<=a[i][j])//兩軸的相差 abs 絕對值
                    {
                        sum+=a[k][l];//分清楚a[k][[l]的意義
                    }
                }
            }
            if(sum%10==a[i][j])
            {
                one[total][0]=i;
                one[total][1]=j;
                //怎麼把a[i][j]存進one裡
                total++;
            }
        }
        
    }
    cout<<total<<endl;
    for(int i=0; i<total; i++)
    {
        cout<<one[i][0]<<" "<<one[i][1]<<endl;
        
    }
}
/*先找出矩形的範圍
 a[0][0]5  a[0][1]2  a[0][2]3
 a[1][0]4  a[1][1]5  a[1][2]6
                               
 a[-5][-5] a[5][5],
 a[-2][-1] a[2][3],
 a[-3][-1]  a[3][5],
 
 a[-3][-4] a[5][4],
 a[-4][-4] a[6][6],
 a[-5][-4]  a[7][8]
 

判斷 {k,l} 到 {i,j} 的曼哈頓距離 <= a[i][j] -> 加到總和裡面
if(abs(i-k) + abs(l-j) <= a[i][j])
{
    sum += a[k][l];
}

*/
 
 

 