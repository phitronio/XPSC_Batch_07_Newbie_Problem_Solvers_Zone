#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int unmatch0=0, unmatch1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0') unmatch0++;
        else{//s[i]=='1
            if(unmatch0>0) unmatch0--;
            else unmatch1++;
        }
    }

    if(unmatch0==0 && unmatch1==0) cout << 0 << endl;
    else if(unmatch0>0 && unmatch1>0) cout << 2 << endl;
    else cout << 1 << endl;
}
