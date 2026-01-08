#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int x,y;
        cin >> x >> y;

        if(x&1){ // x%2!=0  odd check 
            cout << "Alice" << "\n";
        }
        else cout << "Bob" << "\n";


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */