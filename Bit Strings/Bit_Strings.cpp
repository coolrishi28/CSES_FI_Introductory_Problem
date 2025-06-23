#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
ll binpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
signed main()
{
    int n, ans;
    cin >> n;
    ans = binpow(2, n, mod);
    cout << ans;
}
