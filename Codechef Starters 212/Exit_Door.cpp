#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        map<int,int>index;
        for(int i=0; i<n; i++){
            cin >> a[i];
            index[a[i]] = i;
        }
        int ans=0;
        for(int i=n; i>=1; i--){
            int idx = index[i];
            //left side
            int left=0;
            for(int j=idx-1; j>=0; j--){
                if(a[j]<i) left++;
            }

            int right=0;
            for(int j=idx+1; j<n; j++){
                if(a[j]<i) right++;
            }
            // cout << i << " "<< left <<" " << right << endl;
            ans+= min(left, right);
        }
        cout << ans << endl;

    }
}
