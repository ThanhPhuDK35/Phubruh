#include<bits/stdc++.h>
using namespace std;
long long n, p[1000001], sum[1000001];
pair<long long, int> x[10000001];

int main()
{
    freopen("POST.inp","r",stdin);
    freopen("POST.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i].first;
        x[i].second = i;
    }
    sort(x+1, x+1+n);
    for(int i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] + x[i].first;
    }
    long long u;
    for(long long i=1; i<=n; i++)
    {
        u = x[i].first*i - 2*sum[i] + sum[n] - x[i].first*(n-i);
        p[x[i].second] = u;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<p[i]<<" ";
    }
}
