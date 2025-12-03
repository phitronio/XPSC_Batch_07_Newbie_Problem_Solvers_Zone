#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll sum = 0;
    int gc = 0;
    for(int i = 0; i < n; i++)
    {
        int h = mx - a[i];
        sum += h;
        gc = gcd(gc, h);
    }

    cout << sum / gc << " " << gc << '\n';




    return 0;
}
