#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int a,b, x,y;
        cin >> a >> b >> x >> y;

        int trade = (a/x);

        int ans = (b+trade*y)  +  (a-trade*x);
        cout << ans << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */