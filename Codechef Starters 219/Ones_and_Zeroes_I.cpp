#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans=0, zero=0, one=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') zero++;
            else one++;

            if(one>=zero) ans++;
        }

        cout << ans << "\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */