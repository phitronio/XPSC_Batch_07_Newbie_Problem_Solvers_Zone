#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, cnt1 = 0, cnt2 = 0;
      cin >> n;
      for (int i = 1;i <= n;i++) {
         int x;
         cin >> x;
         if (x == 0) {
            cnt1++;
         }
         else {
            cnt2++;
         }
      }
      cout << max(cnt1, cnt2) << '\n';
   }

   return 0;
}