#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int n, i, ele = 0;
    cin >> n;
    vector<int> arr;
    for(i = 0; i < n; i++)
    {
        ++ele;
        arr.push_back(ele);
    }
    if(n == 2 or n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for(i = 1; i < n; i += 2)
        {
            cout << arr[i] << " ";
        }
        for(i = 0; i < n; i += 2)
        {
            cout << arr[i] << " ";
        }
    }
}
