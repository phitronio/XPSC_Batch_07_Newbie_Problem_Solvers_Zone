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
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0;i < n - 1;i++) {
            sum += abs(a[i] - a[i + 1]);
        }

        int ans = min(sum - abs(a[0] - a[1]), sum - abs(a[n - 2] - a[n - 1]));

        for (int i = 1;i < n - 1;i++) {
            ans = min(ans, (sum - (abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]))) + abs(a[i - 1] - a[i + 1]));
        }

        cout << ans << '\n';
    }

    return 0;
}