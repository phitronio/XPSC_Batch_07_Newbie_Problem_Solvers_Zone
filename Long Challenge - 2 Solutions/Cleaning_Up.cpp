#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<bool> job_done(n + 1);
    for(int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        job_done[x] = true;
    }

    vector<int> jobs_remaing;
    for(int i = 1; i <= n; i++)
    {
        if(!job_done[i])
            jobs_remaing.push_back(i);
    }

    if(jobs_remaing.size() == 0)
    {
        cout << -1 << '\n' << -1 << '\n';
    }
    else if(jobs_remaing.size() == 1)
    {
        cout << jobs_remaing[0] << '\n' << -1 << '\n';
    }
    else
    {
        for(int i = 0; i < jobs_remaing.size(); i += 2)
            cout << jobs_remaing[i] << " ";
        cout << '\n';
        for(int i = 1; i < jobs_remaing.size(); i += 2)
            cout << jobs_remaing[i] << " ";
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
