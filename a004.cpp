#include <iostream>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        if(num%400==0 || (num%4==0 && num%100!=0))
        {
            cout<<"¶|¦~"<<endl;
        }
        else
        {
            cout<<"¥­¦~"<<endl;
        }
    }
}