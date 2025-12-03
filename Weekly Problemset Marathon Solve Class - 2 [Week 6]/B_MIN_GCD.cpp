#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin >> n;

    ll mn = LLONG_MAX;
    map<ll,ll> mp;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        mn = min(mn, a[i]);
    }

    if(mp[mn] > 1)
    {
        cout << "Yes\n";
        return;
    }

    
    ll gc = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % mn == 0 && a[i] != mn)
        {
            gc = gcd(gc, a[i]);
        }
    }

    if(gc == mn)
        cout << "Yes\n";
    else
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
