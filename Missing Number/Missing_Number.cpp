#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
    int n, i, s = 0;
    cin >> n;
    int arr[n - 1];
    for(i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }
    int tot_s = n * (n + 1) / 2;
    int ans = tot_s - s;
    cout << ans;
}
