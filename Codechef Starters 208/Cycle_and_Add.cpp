#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<ll>b(n), d(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        for(int i=0; i<n; i++){
            cin >> d[i];
        }

        vector<vector<ll>>dp(n+1, vector<ll>(n,0));

        //base case
        for(int i=0; i<n; i++) dp[0][i] = b[i]*d[i];
        ll ans =0;
        for(ll i=0; i<n; i++) ans+= dp[0][i];

        for(int i=1; i<n; i++){
            for(ll j=0; j<n; j++){
                dp[i][j] = min(dp[i-1][j], d[j]*b[(j-i+n)%n]);
            }
            ll current=0;
            for(ll j=0; j<n; j++) current+=dp[i][j];
            current+=i*c;
            ans = min(ans, current);
        }
        cout << ans << endl;
    }
}
