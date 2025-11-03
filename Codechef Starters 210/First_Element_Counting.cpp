#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<ll,ll>>a(n);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            a[i] = {x, i};
        }

        sort(a.begin(), a.end());
        vector<ll>ans(n, -1);
        for(int i=1; i<n-1; i++){
            ll x = (a[i].first-a[i-1].first+1)/2 + (a[i+1].first-a[i].first)/2;
            ans[a[i].second] = x;
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
