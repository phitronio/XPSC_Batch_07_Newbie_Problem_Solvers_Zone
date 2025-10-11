#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;
            int dis = abs(a-x)+abs(b-y);
            ans = min(ans, dis);
        }
        cout << ans << "\n";
    }
}
