#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int t, y, x;
    cin >> t;
    while(t--)
    {
        cin >> y >> x;
        int val, ans = 0;
        if (x == y)
        {
            ans = 1 + (x * (x - 1));
        }
        else if (x > y)
        {
            val = 1 + (x * (x - 1));
            ans = val + ((int)pow(-1, x - 1)) * (x - y);
        }
        else
        {
            val = 1 + (y * (y - 1));
            ans = val + ((int)pow(-1, y) * (y - x));
        }
        cout << ans << endl;
    }
}
