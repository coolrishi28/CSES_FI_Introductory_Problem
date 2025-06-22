#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
 
signed main()
{
    int i, len, count = 1, ans = INT_MIN;
    string str;
    cin >> str;
    str = str + 'P';
    len = str.length();
    for(i = 1; i < len; i++)
    {
        char c1 = str[i - 1];
        char c2 = str[i];
        if(c1 == c2)
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 1;
        }
    }
    cout << ans;
}
