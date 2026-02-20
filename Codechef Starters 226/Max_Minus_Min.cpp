#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        n = a.size();
        
        for(int i=0; i<n-1; i++){
            while(2*a[i] <= a[n-1]) a[i] *= 2;
        }
        
        sort(a.begin(), a.end());

        int ans = a[n-1] - a[0];


        for(int i=0; i<n-1; i++){
            int mx = a[i]*2;
            int mn = a[i+1];
            ans = min(ans, mx-mn);
        }

        cout << ans << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */