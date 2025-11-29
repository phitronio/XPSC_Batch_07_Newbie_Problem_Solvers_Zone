#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; 
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll>fruits(n), heights(n);
        for(int i=0; i<n; i++){
            cin >> fruits[i];
        }
        for(int i=0; i<n; i++){
            cin >> heights[i];
        }
        ll l=0, r=0, sum=0, ans=0;
        while(r<n){
            sum += fruits[r];
            if((r<n-1) && sum<=k && (heights[r]%heights[r+1]==0)){
                ans = max(ans, r-l+1);
                r++;
            }
            else{
                if((r<n-1) && (heights[r]%heights[r+1]!=0)){
                    if(sum<=k){
                        ans = max(ans, r-l+1);
                    }
                    l = r+1;
                    r = l;
                    sum = 0;
                }
                else{
                    if(sum<=k){
                        ans = max(ans, r-l+1);
                    }
                    sum -= fruits[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << endl;
    }
}
