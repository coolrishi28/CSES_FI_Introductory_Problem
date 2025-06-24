#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
int nCr(int n, int r)
{
    int i, res = 1;
    for(i = n - r + 1; i <= n; i++)
    {
        res *= i;
    }
    for(i = 2; i <= r; i++)
    {
        res /= i;
    }
    return res;
}
 
signed main()
{
    int n, i, ans = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        ans = nCr(i*i, 2) - 4 * (i - 1) * (i - 2);
        cout << ans << endl;
    }
}
