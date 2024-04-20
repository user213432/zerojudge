#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse( s.begin(), s.end());
    cout<<s;
}
/*
內容
輸入任意數字，並將其數字全部倒轉

輸入說明
輸入一行包含一個整數，且不超過 

輸出說明
輸出翻轉過後的數字

範例輸入 #1
12345
範例輸出 #1
54321
範例輸入 #2
5050
範例輸出 #2
505
*/