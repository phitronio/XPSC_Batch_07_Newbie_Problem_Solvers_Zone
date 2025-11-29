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
        int ans = -1;
        for(int sum=1; sum<=100; sum++){
            int l=0, r=n-1, cnt=0;
            while(l<r){
                if(a[l]+a[r]==sum) cnt++;
                else if(a[l]+a[r]>sum) r--;
                else l++;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
}
