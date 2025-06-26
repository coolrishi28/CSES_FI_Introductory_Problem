#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int n, i, ans = 0, power;
    cin >> n;
    for(i = 1; ; i++)
    {
        power = (int)pow(5, i);
        ans += (int)floor(n / power);
        if(power >= n)
        {
            break;
        }
    }
    cout << ans;
}
