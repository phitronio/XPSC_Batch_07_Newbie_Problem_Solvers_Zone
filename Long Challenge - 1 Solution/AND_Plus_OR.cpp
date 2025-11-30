#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll x;
    cin >> x;
    cout << x / 2 << " " << x - (x / 2) << '\n';
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
