#include <bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i) cin>>a[i];

        int mn=200;
        for(int i=1;i<n;++i)
            mn=min(mn,a[i-1]+a[i]);

        cout<<mn<<endl;
    }
}