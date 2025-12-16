#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n;
    cin >> n;
    vector<pair<int, int>> duration(n);
    for(int i = 0; i < n; i++)
    {
        cin >> duration[i].first >> duration[i].second;
        swap(duration[i].first, duration[i].second);
    }

    sort(duration.begin(), duration.end());
    int ans = 0, last_end = -1;
    for(auto [end, start]: duration)
    {
        if(start >= last_end)
        {
            ans++;
            last_end = end;
        }
    }

    cout << ans << '\n';

    return 0;
}
