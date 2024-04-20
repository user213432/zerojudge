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

string multiplyDigit(string s, int times) //�B�z�Ӧ��
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


string multiply(string s, int times) //�B�z�h���
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
���@�ӼƦC�M�@���ܼơA�D�ܼƦb�ƦC�̪��ӼƩM�ܼƪ��`�M�C

��J����
��J�u�����A�Ĥ@���J�ƦC�A�ĤG���J�ܼơC

��X����
��X�u�����A�Ĥ@���X�ӼơA�ĤG���X�`�M�C

�d�ҿ�J #1
1 2 3 4 1
1
�d�ҿ�X #1
2
2
�d�ҿ�J #2
1 2 3 3 3 3 
3
�d�ҿ�X #2
4
12
*/