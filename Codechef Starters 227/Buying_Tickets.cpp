#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;
        vector<int> cost(n);
        for(int i=0; i<n; i++) cin >> cost[i];

        string s;
        cin >> s;
        vector<int> available;
        for(int i=0; i<n; i++){
            if(s[i]=='0') available.push_back(cost[i]);
        }

        int khali = available.size();
        if(khali<k){
            cout << -1 << endl; 
        }
        else{
            sort(available.begin(), available.end());
            int sum=0;
            for(int i=0; i<k; i++){
                sum += available[i];
            }
            cout << sum << endl;
        }



    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */