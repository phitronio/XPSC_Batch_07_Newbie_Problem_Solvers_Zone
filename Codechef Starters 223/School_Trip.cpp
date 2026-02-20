#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,x,k;
        cin >> n >> x >> k;

        // remove :
        int remove = x%k;

        // add :
        int add = 1e9;
        if(n-x >= k-(x%k)) add = k-(x%k);

        cout << min(add, remove) << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */