#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m;
    cin >> n >> m;
    multiset<ll> tickets;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        tickets.insert(t);
    }

    for(int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        auto it = tickets.upper_bound(x);
        if(it == tickets.begin())
            cout << -1 << '\n';
        else
        {
            it--;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    return 0;
}
