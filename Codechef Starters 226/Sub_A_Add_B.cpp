#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,a,b;
        cin >> n >> a >> b;

        while(n>=a){
            n -= (a-b);
        }

        cout << n << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */