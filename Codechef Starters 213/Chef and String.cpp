#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      int n, k;
      cin >> n >> k;
      string s, a;
      cin >> s;
      long long ans = (1LL * n * k) - 1;
      for (auto c : s) {
         if (c != 'I') {
            a.push_back(c);
         }
      }
      int cnt = 0;
      for (int i = 0;i < (int)a.size() - 1;i++) {
         if (a[i] != a[i + 1]) {
            cnt++;
         }
      }
      long long rmv = 1LL * cnt * k;
      if (a.front() != a.back()) {
         rmv += (k - 1);
      }
      ans -= rmv;
      cout << ans << '\n';
   }
   return 0;
}