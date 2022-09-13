#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], f[1000001];

int main()
{
    //freopen("SELSEQ.inp","r",stdin);
   // freopen("SELSEQ.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    f[1]=a[1];
    f[2]=max(a[1], a[2]);
    for(int i=3; i<=n; i++)
    {
        f[i]=max(a[i], max(f[i-1], (a[i]+f[i-2])));
    }
    cout<<f[n];
}
