#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, x = 2048, ans = 0;
    cin >> n;
    while(n)
    {
        if(n >= x)
        {
            n -= x;
            ans++;
        }
        else
            x /= 2;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
