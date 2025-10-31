#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int n;
    cin >> n;
    map<int, int> last_index;
 
    int ans = 0;
    for(int j = 1, i = 1; j <= n; j++)
    {
        int x;
        cin >> x;
 
        i = max(i, last_index[x] + 1);
        last_index[x] = j;
        ans = max(ans, j - i + 1);
    }
 
    cout << ans << '\n';
 
    return 0;
}