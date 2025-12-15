#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int c1 = 0;  
        int c2 = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                c1++;
            } else if (arr[i] >= 2) {
                c2++;
            }
        }

        // ans = c2 + ceil(c1 / 2)
        int ans = c2 + (c1 + 1) / 2;

        cout << ans << endl;
    }
}