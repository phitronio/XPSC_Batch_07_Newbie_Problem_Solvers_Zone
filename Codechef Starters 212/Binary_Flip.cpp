#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int cnt00=0, cnt11=0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='0') cnt00++;
            if(s[i]=='1' && s[i+1]=='1') cnt11++;
        }
        if(cnt11>=cnt00){
            cout << 0 << endl;
        }
        else{// cnt00>cnt11
            int dif = cnt00-cnt11;
            cout << (dif+1)/2 << endl;
        }
    }
}
