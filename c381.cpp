#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            break;
        }        
        string b="";
        for(int i=0; i<n; i++)
        {
            string a;
            cin>>a;
            b=b+a;
        }
        
        for(int i=0; i<m; i++ )
        {
            int num;
            cin>>num;
            cout<<b[num-1];
        }
        cout<<endl;

    }
}
/*輸入說明
輸入檔中有多組測試資料。

每組測試資料的第一行是兩個正整數 n(<1000001), m(<101)。接下來的 n 行每行有一個英文單字，每個單字的長度不超過 100。最後一行有 m 個以空白隔開的正整數，所提供的數字不會超過字串的總長度。

當 n, m 均為 0 表示檔案結束，不須處理這組輸入。

輸出說明
對於每組測試資料，請輸出所擷取的文字於一行。

範例輸入 #1
9 8
the
quick
brown
fox
jumps
over
the
lazy
dog
33 11 34 19 21 33 30 32
0 0
範例輸出 #1
doomsday
*/