#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt0=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') cnt0++;
        }
        int min_0=0, max_0=0;
        for(int i=0; i<k; i++){
            //int group_sz = ceil((n-i)/k);
            int group_sz = (n-i+k-1)/k;
            min_0 += group_sz/2;
            max_0 += (group_sz+1)/2;
        }
        if(cnt0>=min_0 && cnt0<=max_0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
