#include<bits/stdc++.h>
using namespace std;
long long n, x, e, m, ma=-1e9;
pair<long long, long long> a[100001];
bitset<20> b;

void inra()
{
    long long s=0, k=0;
    for(int i= n-1; i>= 0; i--)
    {
        if(b[i]==1)
            {s=s+a[i].first; k=k+a[i].second;}
    }
    if(s <= m)
    {
        ma=max(ma, k);
    }
       
}

int main()
{
    freopen("Knap1.inp","r",stdin);
    freopen("Knap1.out","w",stdout);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i].first>>a[i].second;
    x=1<<n;
    for(int i=0; i<x; i++)
    {
        b = bitset<20>(i);  
        inra();
    }
    cout<<ma;
}