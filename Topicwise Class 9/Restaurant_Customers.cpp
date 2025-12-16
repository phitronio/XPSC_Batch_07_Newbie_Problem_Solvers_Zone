#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n;
    cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }

    int cnt = 0, ans = 0;
    for(auto [f, s]: mp)
    {
        cnt += s;
        ans = max(ans, cnt);
    }

    cout << ans << '\n';

    return 0;
}
