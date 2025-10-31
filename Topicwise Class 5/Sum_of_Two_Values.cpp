#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x;
    cin >> n >> x;
 
    vector<pair<int, int>> v;
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }
 
    sort(v.begin(), v.end());
    
 
    for(int i = 0, j = n - 1; i < j;)
    {
        if(v[i].first + v[j].first > x)
            j--;
        else if(v[i].first + v[j].first < x)
            i++;
        else
        {
            cout << v[i].second << " " << v[j].second << '\n';
            return 0;
        }
    }
 
    cout << "IMPOSSIBLE\n";
 
 
    return 0;
}