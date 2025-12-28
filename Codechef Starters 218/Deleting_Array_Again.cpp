#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int>a(n),c(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> c[i];
        }
        ll ans=0;
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            mn = min(mn, c[i]);
            ans += a[i]*mn;
        }
        cout << ans << "\n";
    }
}
