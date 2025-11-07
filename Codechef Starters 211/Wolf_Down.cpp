#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < n && s[i] == '0'; i++)
            ans++;

        cout << ans << endl;
    }

    return 0;
}
