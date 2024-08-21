#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    if(n<=1)
    {
        cout << "err" ;
    }
    bool x = true;
    for(int i = 2 ; i < n ;i++)
    {
        if(n%i==0)
        {
            x = false;

        }
    }
    if (x)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }

    return 0;
}
