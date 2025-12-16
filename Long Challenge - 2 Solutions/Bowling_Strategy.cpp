#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    if(k == 1)
    {
        if(n == 1)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }
    else
    {
        if(l * k < n)
            cout << -1 << '\n';
        else
        {
            for(int i = 1, j = 1; j <= n; i++, j++)
            {
                if(i == k + 1)
                    i = 1;
                cout << i << " ";
            }
            cout << '\n';
        }
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
