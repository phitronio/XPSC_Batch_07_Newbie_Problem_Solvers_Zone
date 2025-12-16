#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin >> n;
    int l = 1, r = n;
    int i = 1;
    vector<int> v;
    while(l <= r)
    {
        if(i & 1)
        {
            v.push_back(r);
            r--;
        }
        else
        {
            v.push_back(l);
            l++;
        }
        i++;
    }
    reverse(v.begin(), v.end());

    for(auto u: v)
        cout << u << " ";
    cout << '\n';
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
