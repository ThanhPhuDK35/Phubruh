#include <bits/stdc++.h>
using namespace std;
long long a[100005],n, q, u, b[100009], d;

int main()
{
    freopen("GAME.inp","r",stdin);
    freopen("GAME.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=2; i<=n; i++)
    {
        q=a[i]-a[i-1];
        if(i == 2)
           u=q;
        else
        if(i>=3)
        {
            u=__gcd(q, u);
        }
    }
    for(long long i=1; i<=sqrt(u); i++)
    {
        if(u%i == 0)
        {
            d++;
            b[d]=i;
        if(u==(long long)(sqrt(u)) * (long long)(sqrt(u)) and u/i==i)
        {
            continue;
        }
        else
        {
            d++;
            b[d] = u/i;
        }
        }
    }
    sort(b+1, b+d+1);
    for(int i=2; i<=d; i++)
       cout<<b[i]<<" ";
}
