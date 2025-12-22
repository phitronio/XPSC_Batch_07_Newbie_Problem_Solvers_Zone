#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int g = a[1]-a[0];
        for(int i=1; i<n; i++){
            g = __gcd(g, a[i]-a[i-1]);
        }
        int ans=0;
        for(int i=1; i<n; i++){
            int need = (a[i]-a[i-1])/g -1;
            ans+=need;
        }
        cout << ans << endl;
    }
}
