#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mod = 1000000007;
 
void tower_of_hanoi(int n, int a, int b, int c)
{
    if(n > 0)
    {
        tower_of_hanoi(n - 1, a, c, b);
        cout << a << " " << c << endl;
        tower_of_hanoi(n - 1, b, a, c);
    }
    return;
}
 
signed main()
{
    int n, i, count = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        count += pow(2, i);
    }
    cout << count << endl;
    tower_of_hanoi(n, 1, 2, 3);
}
