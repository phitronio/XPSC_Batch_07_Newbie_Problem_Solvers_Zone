#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++){ // Operation - 1
            if('A'<=s[i] && s[i]<='Z'){
                s[i] = (s[i] | (1<<5));  // Upper to Lower convert
            }
        }

        // operation - 2
        vector<int> frq(26);
        for(int i=0; i<n; i++){
            frq[s[i]-'a']++;
        }

        sort(frq.rbegin(), frq.rend());

        cout << frq[0] + frq[1] << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */