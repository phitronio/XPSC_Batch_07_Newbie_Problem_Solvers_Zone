#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll x){
    return (x*(x+1))/2;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll>a(n+1),b(n+1);
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> b[i];

        ll f1=1, fm=m;
        for(int i=1; i<=n; i++){
            f1 = max(a[i], f1+b[i]);
            fm = max(a[i], fm+b[i]);
        }

        ll k = fm-f1;
        ll ans = f1*(m-k);
        ans+= (sum(fm)-sum(f1));
        cout << ans << endl;
    }
}
