#include<bits/stdc++.h>
using namespace std;
long long a[10000001], n, x, m, s;

int main()
{
    freopen("SUMSEQ.INP","r",stdin);
    freopen("SUMSEQ.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n>>x>>m;
    a[1]=x;
    s=x;
    for(int i=2; i<=n; i++)
    {
        a[i]=((a[i-1]%m)*(a[i-1]%m))%m;
        s=s+a[i];
    }
    cout<<s;
}