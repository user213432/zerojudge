#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string s1,  string s2)
{
    int minLength = min(s1.length(), s2.length());
    int carry = 0;
    string result = "";
    for(int i = 0; i < minLength; i++)
    {
        int sum = (s1[s1.length()-1-i]-'0') + (s2[s2.length()-1-i]-'0') + carry;
        carry  = sum/10;
        result += (sum%10) + '0';
    }

    if(s1.length() > s2.length())
    {
        for(int i = s1.length()-minLength-1; i >= 0; i--)
        {
            int sum = s1[i]-'0'+carry;
            carry = sum/10;
            result += (sum%10) + '0';
        }
        if(carry == 1)
        {
            result += '1';
        }
    }
    else if(s1.length() < s2.length())
    {
        for(int i = s2.length()-minLength-1; i >= 0; i--)
        {
            int sum = s2[i]-'0'+carry;
            carry = sum/10;
            result += (sum%10) + '0';
        }
        if(carry == 1)
        {
            result += '1';
        }
    }
    else if(s1.length() == s2.length())
    {
        if(carry == 1)
        {
            result += '1';
        }
    }

    reverse(result.begin(), result.end());

    return result;


}

string multiplyDigit(string s, int times) //處理個位數
{
    int len = s.length();
    string result = "";
    int carry = 0;
    for(int i = len-1; i >= 0; i--)
    {
        int sum = carry + ((s[i]-'0')*times);
        carry = sum/10;
        result += (sum%10) + '0';
    }

    if(carry > 0)
    {
        result += (carry+'0');
    }
    reverse(result.begin(), result.end());
    return result;
}


string multiply(string s, int times) //處理多位數
{
    string result = "0";

    int len = s.length();

    while(times > 0)
    {
        int digit = times%10;
        result = add(result,multiplyDigit(s,digit));
        times /= 10;
        s += '0';
    }

    return result;

}


string a[1000000];


int main()
{
    int aSize = 0;

    string s;
    getline(cin,s);
    string target;
    cin >> target;

    int len = s.length();
    string buffer = "";
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ')
        {
            if(buffer != "")
            {
                a[aSize] = buffer;
                buffer = "";
                aSize++;
            }
        }
        else
        {
            buffer += s[i];
        }
    }
    if(buffer != "")
    {
        a[aSize] = buffer;
        buffer = "";
        aSize++;
    }

    int counter = 0;

    for(int i = 0; i < aSize; i++)
    {
        if(target == a[i])
        {
            counter++;
        }
    }

    cout << counter << endl;
    cout << multiply(target,counter);

}
/*
有一個數列和一個變數，求變數在數列裡的個數和變數的總和。

輸入說明
輸入只有兩行，第一行輸入數列，第二行輸入變數。

輸出說明
輸出只有兩行，第一行輸出個數，第二行輸出總和。

範例輸入 #1
1 2 3 4 1
1
範例輸出 #1
2
2
範例輸入 #2
1 2 3 3 3 3 
3
範例輸出 #2
4
12
*/