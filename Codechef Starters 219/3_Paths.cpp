#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        if(n<3){
            cout << -1 << "\n";
            continue;
        }

        vector<vector<int>> ans(n, vector<int> (n,0));
        for(int i=0; i<n; i++){     // first row
            ans[0][i] = 1;
        }
        
        for(int i=0; i<n; i++){     // last column
            ans[i][n-1] = 1;
        }

        ans[1][n-2]=1;
        ans[2][n-2]=1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */