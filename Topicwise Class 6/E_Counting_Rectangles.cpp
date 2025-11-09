#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, q;
    cin >> n >> q;

    vector<vector<ll>> pre(1001, vector<ll> (1001, 0));

    for(int i = 1; i <= n; i++)
    {
        ll h, w;
        cin >> h >> w;
        pre[h][w] += (h * w);
    }

    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            pre[i][j] = pre[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    while(q--)
    {
        ll hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;
        hb--;
        wb--;
        hs++;
        ws++;
        cout << pre[hb][wb] - pre[hs - 1][wb] - pre[hb][ws - 1] + pre[hs - 1][ws - 1] << '\n';

    }
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