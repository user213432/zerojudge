#include <iostream>
#include <cmath>
using namespace std;
int f(int i)
{
    if(i>0)
    {
        return f(i-2)*i;
    }
    else
    {
        return f(i-2)*(-i);
    }

}
int main()
{
    cout<<f(10);
    
}