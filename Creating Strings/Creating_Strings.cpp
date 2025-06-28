#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mod = 1000000007;
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    vector<string> ans;
    int count = 0, i;
    sort(str.begin(), str.end());
    
    do{
        count++;
        ans.push_back(str);
    }while(next_permutation(str.begin(), str.end()));
    
    cout << count << endl;
    
    for(i = 0; i < count; i++)
    {
        cout << ans[i] << endl;
    }
}
