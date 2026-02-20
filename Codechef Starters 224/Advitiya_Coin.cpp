#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(auto &i: a) cin >> i;

        int mx=0, mn=1e9+7, cnt=0;
        for(int i=0; i<n; i++){
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);

            if(mx-mn > k){
                cnt++;
                mn = 1e9+7;
                mx=0;
            }
        }

        cout << cnt << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */