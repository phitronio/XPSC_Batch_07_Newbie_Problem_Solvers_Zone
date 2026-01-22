#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];

        sort(a.begin(), a.end());

        
        ll cnt=0;
        for(int i=0; i<m; i++){  // TC: mlogn
            int foundidx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            cnt += (n-foundidx);
        }

        cout << cnt << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */