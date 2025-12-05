#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    map<char, int> cnt_s, cnt_t;
    for(int i = 0; i < n; i++)
    {
        cnt_s[s[i]]++;
        cnt_t[t[i]]++;
    }

    int ans = 0;
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        ans = max(ans, min(cnt_s[ch], cnt_t[ch]));
    }
    cout << ans << '\n';
    
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
