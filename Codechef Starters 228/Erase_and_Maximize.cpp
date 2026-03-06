#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,s;
        cin >> n >> s;

        int totalsum_using_5 = n*5;

        if(totalsum_using_5 >= s) cout << n*6 << endl;
        else{
            int first_step_usuage_6 = s%(totalsum_using_5);
            int first_step_usuage_5 = n- first_step_usuage_6;

            int ans = first_step_usuage_6 * 5   +   first_step_usuage_5 * 6;
            cout << ans << endl;
        }


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */