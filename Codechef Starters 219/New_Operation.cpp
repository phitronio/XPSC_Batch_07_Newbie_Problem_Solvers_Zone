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

        int mn = a[0];
        for(int i=1; i<n; i++){
            mn += 2*a[i];
        }

        int mx = 0;
        for(int i=0; i<n; i++){
            mx += a[i]*(1<<i);  // (1<<i)  -> pow(2,i)
        }

        cout << mn << " " << mx << "\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */