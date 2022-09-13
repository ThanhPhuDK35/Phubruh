#include<bits/stdc++.h>
using namespace std;
long long t, n, a[1000001];

int main()
{
    freopen("dayucln.Inp","r",stdin);
    freopen("dayucln.Out","w",stdout);
    cin>>t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        a[0]=1; a[n+1]=1;
        for(int i=1; i <= n+1; i++)
        {
            cout<<a[i-1]*a[i]/(__gcd(a[i-1], a[i]))<<" ";
        }
        cout<<"\n";
    }
}