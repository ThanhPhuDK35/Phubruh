#include <bits/stdc++.h>
using namespace std;
int n, a[10000001], ans, t, s[100000000];

int main()
{
    freopen("NoDivisible.inp","r",stdin);
    freopen("NoDivisible.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        t=1;
        while(t*a[i] <= 1000000)
        {
            s[t*a[i]]++;
            t++;
        }
    }
    ans=0;
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]]==1)
            ans++;
    }
    cout<<ans;
}
