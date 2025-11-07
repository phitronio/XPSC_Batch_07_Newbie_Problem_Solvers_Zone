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
        if(s[0]=='0' || s[n-1]=='0'){
            cout << -1 << endl;
            continue;
        }
        vector<int>a;
        for(int i=0; i<n; i++){
            a.push_back(i+1);
        }

        for(int i=1; i<n-1; i++){
            if(s[i]=='0') swap(a[i],a[i+1]);
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
