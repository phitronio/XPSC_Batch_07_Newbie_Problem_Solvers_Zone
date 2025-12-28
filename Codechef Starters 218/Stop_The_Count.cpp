#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=0;
        int chef=0, opp=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') chef++;
            else opp++;
            if(chef>opp) ans++;
        }
        cout << ans << "\n";
    }
}
