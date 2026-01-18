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

        map<char,int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        bool f=false;
        for(auto [x,y]: mp){
            if(y>2){
                f=true;
                break;
            }
        }

        cout << (f ? "NO": "YES") << "\n";

        // (f ? (cout << "NO\n"): (cout << "YES\n"));

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */