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
            int up=i-a[i][j];//����row���W
            int left=j-a[i][j];//����column
            
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
            for(int k=up; k<=down; k++)//�a�b������ �ѤW��U
            {
                for(int l=left; l<=right; l++ )//��b������
                {
                    
                    if(abs(i-k)+abs(l-j)<=a[i][j])//��b���ۮt abs �����
                    {
                        sum+=a[k][l];//���M��a[k][[l]���N�q
                    }
                }
            }
            if(sum%10==a[i][j])
            {
                one[total][0]=i;
                one[total][1]=j;
                //����a[i][j]�s�ione��
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
/*����X�x�Ϊ��d��
 a[0][0]5  a[0][1]2  a[0][2]3
 a[1][0]4  a[1][1]5  a[1][2]6
                               
 a[-5][-5] a[5][5],
 a[-2][-1] a[2][3],
 a[-3][-1]  a[3][5],
 
 a[-3][-4] a[5][4],
 a[-4][-4] a[6][6],
 a[-5][-4]  a[7][8]
 

�P�_ {k,l} �� {i,j} ���ҫ��y�Z�� <= a[i][j] -> �[���`�M�̭�
if(abs(i-k) + abs(l-j) <= a[i][j])
{
    sum += a[k][l];
}

*/
 
 

 