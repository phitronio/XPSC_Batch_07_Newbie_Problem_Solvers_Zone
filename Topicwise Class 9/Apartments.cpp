#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    for(int i = 0, j = 0; i < n && j < m;)
    {
        if(abs(a[i] - b[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans << '\n';

    return 0;
}
