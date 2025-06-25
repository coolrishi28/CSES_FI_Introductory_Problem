#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int test, a, b;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        if((a + b) % 3 == 0 and (max(a,b) <= 2 * min(a,b)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
