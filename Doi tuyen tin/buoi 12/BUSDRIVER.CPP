#include<bits/stdc++.h>
using namespace std;
long long n, d, r, s, e, a[10001], b[10001];

int main()
{
    freopen("BUSDRIVER.inp","r",stdin);
    freopen("BUSDRIVER.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>n>>d>>r){
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    s=0;
    sort(a+1, a+1+n);
    sort(b+1, b+n+1, greater<int>());
    for(int i=1 ;i<=n; i++)
    {
        e=a[i]+b[i];
        if(e > d)
          s=s+(e-d)*r;
    }
    cout<<s<<"\n";
    }
}
