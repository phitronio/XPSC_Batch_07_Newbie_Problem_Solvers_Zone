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
        int first1=-1, last1=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                first1=i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                last1=i;
                break;
            }
        }

        int ans=0;
        if(first1==-1){
            cout << 0 << endl;
            continue;
        }

        for(int i=first1; i<=last1; i++){
            if(s[i]=='0') ans++;
        }
        cout << ans << endl;
    }
}
