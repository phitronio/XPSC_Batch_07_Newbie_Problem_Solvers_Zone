#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i=0; i<k && i<n; i++){
            a[i]=0;
            x+=100;
        }
        int rank=0;
        for(int i=0; i<n; i++){
            if(a[i]>x){
                rank++;
            }
        }
        cout << rank+1 << endl;
    }
}
