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
      vector<int> cnt(4);
      for (int i = 0;i < n;i++) {
         int x;
         cin >> x;
         cnt[x]++;
      }
      int ans = max(0, cnt[2] - 1) + min(cnt[1], cnt[3]);
      cout << ans << '\n';
   }
   return 0;
}