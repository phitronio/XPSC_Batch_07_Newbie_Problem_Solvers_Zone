#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=0; i<=n; i++) cin >> a[i];

        int ans = 1e5;
        for(int i=1; i<=n; i++){
            int loudness = max(a[i-1], a[i]);
            ans = min(ans, loudness);
        }
        // for(int i=0; i<n; i++){
        //     int loudness = max(a[i], a[i+1]);
        //     ans = min(ans, loudness);
        // }
        cout << ans << "\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */