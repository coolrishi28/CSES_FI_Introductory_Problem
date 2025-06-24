#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define mod 1e9 + 7
 
signed main()
{
    int n, tot_sum;
    cin >> n;
    tot_sum = n * (n + 1) / 2;
    if(tot_sum % 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        int i, size = (n + 1) / 2;
        int arr[n];
        for(i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        cout << size << endl;
        for(i = 0; i < size/2; i++)
        {
            if(!(n % 2))
            {
                cout << arr[i] << " " << arr[n - size / 2 + i] << " ";
                arr[i] = 0;
                arr[n - size / 2 + i] = 0;
            }
            else
            {
                cout << arr[i] << " " << arr[n - size / 2 + i - 1] << " ";
                arr[i] = 0;
                arr[n - size / 2 + i - 1] = 0;
            }
        }
        cout << endl << n - size << endl;
        for(i = 0; i < n; i++)
        {
            if(arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
        }
    }
}
