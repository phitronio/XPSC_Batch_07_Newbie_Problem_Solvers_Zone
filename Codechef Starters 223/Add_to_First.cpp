#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        vector<bool> parbo(n);
        ll mx=0;
        for(int i=0; i<n; i++){
            if(a[i]>mx){
                parbo[i]=true;
                mx=a[i];
            }
        }

        bool ok=true;
        for(int i=0; i<n; i++){
            if(parbo[i]){
                if(a[i]>b[i]){
                    ok=false;
                    break;
                }
            }
            else{
                if(a[i]!=b[i]){
                    ok=false;
                    break;
                }
            }
        }

        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */