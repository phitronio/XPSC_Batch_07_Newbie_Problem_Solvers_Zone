#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    s = '@' + s;
    int pre[n + 5];
    pre[0] = 0;
    pre[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + (s[i] == s[i - 1]);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l] << '\n';
    }


    return 0;
}