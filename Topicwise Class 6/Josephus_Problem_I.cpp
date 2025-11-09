#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005

ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>
// ordered_set ms
// ms.order_of_key(k) ~~ Number of items strictly smaller than k .
// ms.find_by_order(k); ~~ K-th iterator in a set (counting from zero).

int main()
{
    FAST;
    int n;
    cin >> n;
    ordered_set s;
    for(int i = 1; i <= n; i++)
        s.insert(i);

    int idx = 1 % n;
    while(n--)
    {
        auto it = s.find_by_order(idx);
        cout << *it << '\n';
        s.erase(it);

        if(n)
            idx = (idx + 1) % n;
    }


    return 0;
}
