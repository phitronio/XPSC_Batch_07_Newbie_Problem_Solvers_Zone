#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        if(n==1){
            cout << m+1 << "\n";
            continue;
        }
        ll bits = floor(log2(m));//10-->3.something, 16-->4
        ll ans = m-pow(2,bits)+1;
        ans = ans*2;
        cout << ans << "\n";
    }
}
