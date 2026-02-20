#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll b,g,x,y,n;
        cin >> b >> g >> x >> y >> n;

        ll r = ceil((b+g)/ (1.0*n));

        if(r*x <= b && r*y <= g) cout << r << endl;
        else cout << -1 << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */