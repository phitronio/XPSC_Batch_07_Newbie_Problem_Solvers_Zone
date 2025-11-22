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
      vector<int> prefMin(n), suffMax(n);
      prefMin[0] = a[0];
      suffMax[n - 1] = a[n - 1];

      for (int i = 1;i < n;i++) {
         prefMin[i] = min(prefMin[i - 1], a[i]);
      }
      for (int i = n - 2;i >= 0;i--) {
         suffMax[i] = max(suffMax[i + 1], a[i]);
      }

      bool ok = true;
      for (int i = 0;i < n - 1;i++) {
         if (prefMin[i] > suffMax[i + 1]) {
            ok = false;
            break;
         }
      }

      if (ok) {
         cout << "Yes" << '\n';
      }
      else {
         cout << "No" << '\n';
      }
   }
   return 0;
}