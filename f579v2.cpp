#include <iostream>
#include <stack>
using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int aCount = 0;
        int bCount = 0;
        while(true)
        {
            int number;
            cin >> number;
            if(number == 0)
            {
                break;
            }
            if(number == a)
            {
                aCount++;
            }
            else if(number == -a)
            {
                aCount--;
            }
            else if(number == b)
            {
                bCount++;
            }
            else if(number == -b)
            {
                bCount--;
            }
        }
        if(aCount > 0 && bCount > 0)
        {
            ans++;
        }
    }
    cout << ans;
}