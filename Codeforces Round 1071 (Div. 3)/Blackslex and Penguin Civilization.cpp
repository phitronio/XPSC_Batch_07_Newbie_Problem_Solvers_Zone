#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> ans;

        ans.push_back((1 << n) - 1);

        for (int k = n - 1; k >= 0; k--) {
            vector<int> curr;
            for (int value : ans) {
                curr.push_back(value ^ (1 << k));
            }
            sort(curr.begin(), curr.end());
            for (int value : curr) {
                ans.push_back(value);
            }
        }

        for (auto value : ans) {
            cout << value << " ";
        }

        cout << '\n';
    }

    return 0;
}