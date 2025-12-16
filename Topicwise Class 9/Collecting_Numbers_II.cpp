#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<int> s;
    vector<int> pos(n + 2, INT_MAX);
    ll a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(pos[a[i] - 1] > i)
            s.insert(a[i]);
        pos[a[i]] = i;
    }

    for(int i = 1; i <= m; i++)
    {
        ll x, y;
        cin >> x >> y;
 
        if(pos[a[x]] < pos[a[x] - 1])
            s.erase(a[x]);
        if(pos[a[x] + 1] < pos[a[x]])
            s.erase(a[x] + 1);
        if(pos[a[y]] < pos[a[y] - 1])   
            s.erase(a[y]);
        if(pos[a[y] + 1] < pos[a[y]])
            s.erase(a[y] + 1);
 
        swap(a[x], a[y]);
        swap(pos[a[x]], pos[a[y]]);
        if(pos[a[x]] < pos[a[x] - 1])
            s.insert(a[x]);
        if(pos[a[x] + 1] < pos[a[x]])
            s.insert(a[x] + 1);
        if(pos[a[y]] < pos[a[y] - 1])
            s.insert(a[y]);
        if(pos[a[y] + 1] < pos[a[y]])
            s.insert(a[y] + 1);
 
        cout << s.size()<< '\n';
    }


    return 0;
}
