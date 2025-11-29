#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>a(N);//2e5+5
    for(int i=1; i<=n; i++){//3
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1; i<=N; i++){
        a[i] = a[i]+a[i-1];
    }

    vector<int>ans(N);//2e5+5 
    for(int i=1; i<=N; i++){
        if(a[i]>=k) {
            ans[i] =1;
        }
    }
    for(int i=1; i<=N; i++){
        ans[i]+=ans[i-1];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << ans[r] - ans[l-1] << endl;
    }

}
