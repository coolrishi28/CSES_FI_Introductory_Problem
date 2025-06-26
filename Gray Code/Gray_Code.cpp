#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mod = 1000000007;
 
int gray_code (int n)
{
    return n ^ (n >> 1);
}
 
signed main()
{
    int n, i;
    cin >> n;
    int tot = pow(2, n);
    for(i = 0; i < tot; i++)
    {
        bitset<16> br(gray_code(i));
        cout << br.to_string().substr(16 - n) << endl;
    }
}
