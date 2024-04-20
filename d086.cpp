#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    while(1)
    {
        string a;
        cin>>a;
        if(a=="0") // " " 轉成字元//
        {
            break;
        }
        int sum=0;
        for(int i=0; i<a.length(); i++) //字串長度 a.length())//
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                sum+=a[i]-'A'+1;
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                sum+=a[i]-'a'+1;
            }
            else
            {
                cout<<"Fail"<<endl;
                sum=-1;
                break;
            }    
        } 
        if(sum>0)
        {
          cout<<sum<<endl;   
        }
        
    }
}
/*輸入說明
輸入英文單字，大小寫不限，當輸入0的時候就結束程式。
長度最長為200個字。
請參照Sample Input。
輸出說明
輸出將英文單字依照題目的規則轉換成數字後相加的結果，如果中間參雜怪異的符號，請輸出Fail；但是英文字母的大小寫並不會影響結果，也就是說A和a所代表的值是相同
的。請參照Sample Output。

範例輸入 #1
hardwork 
KNOWLEDGE 
aTtitUdE 
C++ 
0 
範例輸出 #1
98 
96 
100 
Fail */