#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        if(m>=n && m<=3*n && (m-n)%2==0){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
