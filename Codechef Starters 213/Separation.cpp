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
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      sort(a.begin(), a.end());
      bool ok = true;
      for (int i = 0;i < n - 1;i++) {
         if ((a[i]<k && a[i + 1]>k) || (a[i] > k && a[i + 1] < k)) {
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