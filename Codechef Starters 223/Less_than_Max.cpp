#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<bool> aghe_nichi(n+1);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                aghe_nichi[a[i]] = true;
                cnt++;
            }
            else{
                int aj = a[i]-1;
                if(aghe_nichi[aj]==true){
                    aghe_nichi[a[i]] = true;
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */