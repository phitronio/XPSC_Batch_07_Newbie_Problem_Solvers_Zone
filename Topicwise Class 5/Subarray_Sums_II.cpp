#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n, ex_sum;
    cin >> n >> ex_sum;
 
    map<ll, ll> sum_fre;
    sum_fre[0] = 1;
    ll sum = 0;
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
 
        sum += x;
        ans += sum_fre[sum - ex_sum];
        sum_fre[sum]++;
    }
 
    cout << ans << '\n';
 
 
    return 0;
}