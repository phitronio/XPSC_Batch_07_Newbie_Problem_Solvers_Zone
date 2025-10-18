#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        set<int>s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout << *(s.begin()) -1 << endl;
        }
        else if(s.size()>2){
            cout << *(s.rbegin()) -1 << endl;
        }
        else{//s er size==2
            int mn = *(s.begin());
            int mx = *(s.rbegin());
            for(int i=mx-1; i>=0; i--){
                if(i!=mn){
                    cout << i << endl;
                    break;
                }
            }
        }
        
    }
}
