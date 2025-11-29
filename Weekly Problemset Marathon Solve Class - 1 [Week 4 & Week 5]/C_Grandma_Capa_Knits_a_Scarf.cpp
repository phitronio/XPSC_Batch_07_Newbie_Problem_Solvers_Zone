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
        int ans = 1e9;
        for(char c='a'; c<='z'; c++){
            int l=0, r=n-1;
            int remove=0;
            while(l<r){
                if(s[l]==s[r]){
                    l++, r--;
                }
                else if(s[l]==c) l++, remove++;
                else if(s[r]==c) r--, remove++;
                else{
                    remove=1e9;
                    break;
                }
            }
            ans = min(ans, remove);
        }
        if(ans==1e9) cout << -1 << endl;
        else cout << ans << endl;
    }
}
