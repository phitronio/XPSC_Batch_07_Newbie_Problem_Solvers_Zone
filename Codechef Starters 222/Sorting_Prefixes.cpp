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

        int cost=0;
        for(int i=n-1; i>=0; i--){
            if((i+1)!=a[i]){
                cost=a[i];
                break;
            }
        }

        cout << cost << "\n";
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */