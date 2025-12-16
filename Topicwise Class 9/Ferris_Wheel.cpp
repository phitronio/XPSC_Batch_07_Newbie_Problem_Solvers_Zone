#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for(auto &u: p)
        cin >> u;

    sort(p.begin(), p.end());

    int ans = 0;
    for(int i = 0, j = n - 1; i <= j; j--)
    {
        if(p[i] + p[j] <= x)
        {
            i++;
        }
        ans++;
    }

    cout << ans << '\n';

    return 0;
}
