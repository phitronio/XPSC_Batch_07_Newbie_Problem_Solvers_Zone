#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    cout << 2 * n - 2 + min(x - 1, y - 1) + min(n - x, y - 1) + min(n - x, n - y) + min(x - 1, n - y) << '\n';
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
