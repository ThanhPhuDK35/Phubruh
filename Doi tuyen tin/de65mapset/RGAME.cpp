#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], dem, t;

int main()
{
    //freopen("RGAME.inp","r",stdin);
    //freopen("RGAME.out","w",stdout);
    cin>>t;
    while(t--)
    {
        set<long long> d;
        set<long long> ::iterator it;
        map<long long, long long> s;
        memset(a, 0, sizeof(a));
        cin>>n;
        dem=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s[a[i]]++;
            if(s[a[i]] > 1)
            {
                d.insert(a[i]);
            }
        }
        it = dem;
        if(s[it] >= 4)
        {
            cout<<it * it<<"\n";
        }
    }
}