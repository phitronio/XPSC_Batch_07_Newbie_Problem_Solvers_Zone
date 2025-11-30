#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    vector<ll> a(4);
    for(auto &x : a)
        cin >> x;

    for(int i = 1; i < 16; i++)
    {
        ll sum = 0;
        for(int j = 0; j < 4; j++)
        {
            if(i & (1 << j))
                sum += a[j];
        }
        if(sum == 0)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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
