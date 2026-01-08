#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];


        vector<int> pre(n,-1), suf(n,-1);   // -1 false
        pre[0] = min(a[0],b[0]);
        for(int i=1; i<n; i++){
            int mn = min(a[i],b[i]);
            int mx = max(a[i],b[i]);

            if(pre[i-1]<=mn) pre[i]=mn;
            else if(pre[i-1]<=mx) pre[i]=mx;
            else break;
        }   
        
        suf[n-1] = max(a[n-1],b[n-1]);
        for(int i=n-2; i>=0; i--){
            int mn = min(a[i],b[i]);
            int mx = max(a[i],b[i]);
            
            if(mx<=suf[i+1]) suf[i]=mx;
            else if(mn<=suf[i+1]) suf[i]=mn;
            else break;
        } 
        
        // for(int i=0; i<n; i++) cout << pre[i] << " "; cout << endl;
        // for(int i=0; i<n; i++) cout << suf[i] << " "; cout << endl;
        

        bool possible=false;
        // ith index ee down move dibo:
        for(int i=0; i<n; i++){
            int mn = min(a[i],b[i]);
            int mx = max(a[i],b[i]);

            int aghe=0, pore=1e9;
            bool down_move_possible = true;
            if(i-1>=0){
                if(pre[i-1]!=-1) aghe=pre[i-1];
                else down_move_possible=false;
            }
            if(i+1<n){
                if(suf[i+1]!=-1) pore = suf[i+1];
                else down_move_possible=false;
            }

            if(down_move_possible==true && aghe<=mn && mx<=pore){
                possible = true;
                break;
            }

        }

        if(possible) cout << "Yes\n";
        else cout << "No\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */