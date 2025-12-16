#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> ache(n + 1, false);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(!ache[x - 1])
            ans++;
        ache[x] = true;
    }
    cout << ans << '\n';

    return 0;
}
