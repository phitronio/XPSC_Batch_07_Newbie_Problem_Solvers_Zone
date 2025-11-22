#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      int n, xorA = 0, xorB = 0;
      cin >> n;
      vector<int> a(n + 1), b(n + 1);
      for (int i = 1;i <= n;i++) {
         cin >> a[i];
         xorA ^= a[i];
      }
      for (int i = 1;i <= n;i++) {
         cin >> b[i];
         xorB ^= b[i];
      }
      for (int i = 1;i <= n;i++) {
         int currXorA = xorA, currXorB = xorB;
         currXorA ^= a[i];
         currXorA ^= b[i];
         currXorB ^= b[i];
         currXorB ^= a[i];
         if ((i % 2 != 0) && (currXorA > currXorB)) {
            xorA = currXorA;
            xorB = currXorB;
         }
         if ((i % 2 == 0) && (currXorB > currXorA)) {
            xorA = currXorA;
            xorB = currXorB;
         }
      }

      if (xorA > xorB) {
         cout << "Ajisai" << '\n';
      }
      else if (xorB > xorA) {
         cout << "Mai" << '\n';
      }
      else {
         cout << "Tie" << '\n';
      }
   }
   return 0;
}