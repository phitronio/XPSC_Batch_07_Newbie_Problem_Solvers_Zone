#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one=0;
        int length=0, maxlength=0; // 1 er length, 1 er maxlength

        for(int i=0; i<n; i++){//01110001110
            if(s[i]=='1'){
                one++;
                length++;
                maxlength=max(length, maxlength);
                //cout << i << " " << one<< " " << length << " "<< maxlength << endl;
            }
            else{
                length=0;
            }
        }

        if(one==2 && maxlength==2){
            cout << "No" << endl;
        }
        else if(one==3 && maxlength==3){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
}
