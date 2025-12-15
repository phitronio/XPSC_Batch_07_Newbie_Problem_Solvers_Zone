#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int>dp(n,1);//1,1,1..
        //dp[i] = mane i index porjonto max length of good subsequence
        int mx = INT_MIN;
        for(int i=1; i<n; i++){//A
            for(int j=0; j<i; j++){//B
                if((a[i]^a[j]) == abs(a[i]-a[j])){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            mx = max(mx, dp[i]);
        }
        cout << mx << endl;
    }
}
