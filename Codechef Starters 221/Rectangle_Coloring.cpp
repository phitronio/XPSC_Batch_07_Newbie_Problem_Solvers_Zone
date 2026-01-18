#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll l,w, r,g,b;
        cin >> l >> w >> r >> g >> b;

        int ans=6;
        vector<ll> side = {l,w,l,w};
        vector<ll> color = {r,g,b};


        // try to find ans == 5:
        bool found5=false;
        for(int mask=0; mask<=15; mask++){  // 15 = 1111
            ll sum = 0;
            for(int i=0; i<4; i++){   // 1011
                if(mask&(1<<i)){
                    sum += side[i];
                }
            }

            for(int i=0; i<3; i++){
                if(sum == color[i]){
                    found5 = true;
                    break;
                }
            }
            if(found5) break;
        }

        if(found5) ans=5;


        // try to find 4:
        bool found4=false;
        for(int i=0; i<3; i++){
            if(2*l==color[i] && (color[(i+1)%3]==w && color[(i+2)%3]==w)){
                found4=true; break;
            }
            if(2*w==color[i] && (color[(i+1)%3]==l && color[(i+2)%3]==l)){
                found4=true; break;
            }
            if(l+w==color[i] && ((color[(i+1)%3]==l && color[(i+2)%3]==w) || (color[(i+1)%3]==w && color[(i+2)%3]==l))){
                found4=true; break;
            }
        }

        if(found4) ans=4;

        cout << ans << "\n";
 
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */