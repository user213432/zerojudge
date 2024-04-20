#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string a;
    string b;
    string s;
    cin>>a>>b>>s;
    if(s=="yes")
    {
        cout<<a<<"想和"<<b<<"絕交";
    }    
    else
    {
        cout<<a<<"不想和"<<b<<"絕交";
    }
}