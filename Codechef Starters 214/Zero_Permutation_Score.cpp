#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int score = 0;
        int x = n-3;
        while(x>0){
            score+=x;
            x-=2;
        }
        cout << score << endl;
    }
}
