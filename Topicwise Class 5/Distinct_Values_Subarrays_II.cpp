#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int n, k;
    cin >> n >> k;
    map<int, int> fre;
    int cnt = 0;
    ll ans = 0;
    int a[n + 1];
    for(int i = 1, j = 1; j <= n; j++)
    {
        cin >> a[j];
        fre[a[j]]++;
        if(fre[a[j]] == 1)
            cnt++;
        while(cnt > k)
        {
            fre[a[i]]--;
            if(fre[a[i]] == 0)
                cnt--;
            i++;
        }
        ans += (j - i + 1);
    }
 
    cout << ans << '\n';
 
 
    return 0;
}