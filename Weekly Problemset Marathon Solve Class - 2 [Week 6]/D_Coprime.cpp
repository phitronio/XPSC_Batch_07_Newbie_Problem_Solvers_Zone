#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=-1,x;
        cin>>n;
        map<ll,ll>dis;
        vector<ll>v;

        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(dis[x]==0) v.pb(x);
            dis[x]=i;
        }
        n=v.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                x=__gcd(v[i],v[j]);
                if(x==1)
                {
                    ans=max(ans,dis[v[i]]+dis[v[j]]);
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}