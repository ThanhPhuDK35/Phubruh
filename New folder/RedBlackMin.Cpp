#include<bits/stdc++.h>
using namespace std;
long long n, x[10000001],c[100000001];

int main()
{
    freopen("RedBlackMin.Inp","r",stdin);
    freopen("RedBlackMin.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i = 1; i <= n; i++)
        cin>>x[i];
    for(int i = 1; i <= n; i++)
        cin>>c[i];
    long long i0, i2, ans;
    i0=i2=0; ans=1e9;
    for(int i = 1; i<=n; i++)
    {
        if(c[i] == 0)
        {
            if(i2 > 0) ans = min(ans, x[i] - x[i2]);
              i0=i;
        }
        if(c[i] == 2)
        {
            if(i0>0) ans=min(ans, x[i] - x[i0]);
            i2=i;
        }
    }
    cout<<ans;
}
