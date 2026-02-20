#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >>n >> k;
        vector<int> a(n);
        map<int,int> mp;
        for(auto &i: a) cin >> i, mp[i]++;

        mp.erase(a[0]);
        vector<pair<int,int>> vp;
        for(auto [val, cnt]: mp){
            vp.push_back({cnt, val});
        }

        sort(vp.begin(), vp.end());


        int ans = 1;
        for(auto [cnt, val]: vp){
            int mn = min(cnt, k);
            mp[val] -= mn;
            k -= mn;

            if(mp[val]==0) mp.erase(val);
            if(k==0) break;
        }


        ans += mp.size();
        cout << ans << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */