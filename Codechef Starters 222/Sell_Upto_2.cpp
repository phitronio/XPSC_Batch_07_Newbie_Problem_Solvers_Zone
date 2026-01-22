#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        // Regret Greedy Approch: TC: O(nlogn)
        ll ans=0;
        multiset<ll, greater<ll>> ms; // decending
        // or Use Priority queue (max-heap)

        for(int i=n-1; i>=0; i--){
            // cost can be used 2 times
            ms.insert(a[i]);
            ms.insert(a[i]);

            // sell
            ll mx = *ms.begin();
            ans += mx;
            ms.erase(ms.begin());
        }

        cout << ans << "\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */



    // choosing option : 0 1 2 
    // Dynamic Programming:  TC : O(n*n)
    // vector<vector<ll>> dp(n, vector<ll> (n+1,-1));
    // auto rec=[&](int i, int rem, auto &&rec)->ll{
    //     if(i==n) return 0;
    //     if(dp[i][rem]!=-1) return dp[i][rem];

    //     ll notTake = rec(i+1,rem+1,rec);
    //     ll take = a[i]+rec(i+1,rem,rec);
    //     if(rem>=1) take = max(take, 2*a[i]+rec(i+1,rem-1,rec));

    //     return dp[i][rem] = max(notTake,take);
    // };

    // ll ans = rec(0,0,rec);
    // cout << ans << endl;

