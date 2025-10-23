#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first != b.first){
        return a.first > b.first; // higher score first
    }
    return a.second < b.second; // lower player number first
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>>players;// {score, player_number}
        for(int i=1; i<=n; i++){
            int score = __gcd(i,n);
            players.push_back({score,i});
        }

        sort(players.begin(), players.end(), cmp);

        for(auto ans : players){
            cout << ans.second << " ";
        }
        cout << endl;
    }
}
