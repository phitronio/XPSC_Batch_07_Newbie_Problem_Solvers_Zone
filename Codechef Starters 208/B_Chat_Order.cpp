#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v;

    for(int i = 0; i<n; i++){
        string a;
        cin >> a;
        v.push_back(a);
    }

    unordered_set<string>s ;
    for(int i = n-1 ; i>=0 ; i--){
        if(s.find(v[i]) != s.end()){
            continue;
        }
        else{
            s.insert(v[i]);
        }
    }

    // vector<string> vec(s.begin(),s.end());
    // reverse(vec.begin(),vec.end());

    for(auto it : s){
        cout << it << endl;
    }
    
    return 0;
}