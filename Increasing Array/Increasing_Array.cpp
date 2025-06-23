#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int n, i, ele, ans = 0;
    cin >> n;
    vector<int> arr;
    
    for(i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            int diff = arr[i - 1] - arr[i];
            ans += diff;
            arr[i] += diff;
        }
    }
    cout << ans;
}
