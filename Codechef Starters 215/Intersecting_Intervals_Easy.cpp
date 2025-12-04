#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        vector<ll>dp1(n);//every idx a suru theke mx subarray sum 
        dp1[0] = a[0];
        for(int i=1; i<n; i++){
            dp1[i] = max(dp1[i-1]+a[i], a[i]);
        }
        vector<ll>dp2(n);//every idx a ses theke mx subarray sum 
        dp2[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--){
            dp2[i] = max(dp2[i+1]+a[i], a[i]);
        }
        vector<ll>dp3(n);//every idx a suru theke mx subarray sum 
        dp3[0] = b[0];
        for(int i=1; i<n; i++){
            dp3[i] = max(dp3[i-1]+b[i], b[i]);
        }
        vector<ll>dp4(n);//every idx a ses theke mx subarray sum 
        dp4[n-1] = b[n-1];
        for(int i=n-2; i>=0; i--){
            dp4[i] = max(dp4[i+1]+b[i], b[i]);
        }

        ll ans = -1e18;
        for(int i=0; i<n; i++){
            ll sum_a = dp1[i]+dp2[i]-a[i];
            ll sum_b = dp3[i]+dp4[i]-b[i];
            ans = max(ans, sum_a+sum_b);
        }
        cout << ans << endl;
    }
}
