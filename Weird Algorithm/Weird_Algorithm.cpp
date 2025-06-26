#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int n, k;
    cin >> n;
    k = n;
    for(;;)
    {
        if(k == 1)
        {
            cout << k;
            break;
        }
        cout << k << " ";
        if(k % 2)
        {
            k = 3 * k + 1;
        }
        else
        {
            k = k / 2;
        }
    }
}
