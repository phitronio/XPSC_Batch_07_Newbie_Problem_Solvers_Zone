#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >>n;
        string s;
        cin >> s;

        set<int> one_idx;
        for(int i=0; i<n; i++){
            if(s[i]=='1') one_idx.insert(i);
        }

        ll zero=0, one=0, ans=0, mn=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0' && zero+1>one){
                auto it = one_idx.upper_bound(i);
                if(it!=one_idx.end()){
                    int id1 = *it;
                    swap(s[i],s[id1]);
                    mn += (id1-i);
                    one_idx.erase(it);
                }
            }

            if(s[i]=='0') zero++;
            else one++;

            if(one>=zero) ans++;
        }

        cout << ans << " " << mn << "\n";
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */