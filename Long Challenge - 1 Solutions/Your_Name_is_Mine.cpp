#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


bool subsequence(string a, string b)
{
    for (int i = 0, j = 0; i < a.size(); i++)
    {
        if (a[i] == b[j])
        {
            j++;
        }
        if (j == b.size())
        {
            return true;
        }
    }
    return false;
}

void solve(int tt)
{
    string m, w;
    cin >> m >> w;
    if (subsequence(m, w) || subsequence(w, m))
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++)
    {
        solve(tt);
    }

    return 0;
}
