#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005

ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

void solve(int tt)
{
    int l, r;
    cin >> l >> r;
    if (r <= 3)
        cout << -1 << nl;
    else if(l == r && r % 2 == 1)
    {
        ll x = sqrtl(r);
        for(int i = 2; i <= x; i++)
        {
            if(r % i == 0)
            {
                cout << i << " " << r - i << nl;
                return;
            }
        }
        cout << -1 << nl;
    }
    else
        cout << r / 2 << " " << r / 2 << nl;
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++)
    {
        solve(tt);
    }

    return 0;
}
