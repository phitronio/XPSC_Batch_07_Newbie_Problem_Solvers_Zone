#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    string s;
    cin >> s;
    int c1 = (s[0] == '1') + (s[1] == '1');
    int c2 = (s[2] == '1') + (s[3] == '1');

    if(c1 + c2 == 1)
        cout << 11 << '\n';
    else if(c1 + c2 == 2)
    {
        if(c1 == 2 || c2 == 2)
            cout << 21 << '\n';
        else
            cout << 121 << '\n';
    }
    else if(c1 + c2 == 3)
        cout << 231 << '\n';
    else
        cout << 441 << '\n';
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
