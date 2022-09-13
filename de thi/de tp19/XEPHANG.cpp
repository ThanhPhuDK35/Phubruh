#include<bits/stdc++.h>
using namespace std;
long long n,k,a[55],dem=1e18;

int main()
{
    freopen("XEPHANG.inp","r",stdin);
    freopen("XEPHANG.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(a[n] == 0)
    {
        cout<<n+1<<"\n";
        for(int i=1; i<=n; i++)
        { 
            cout<<a[i]<<" ";
        }
        cout<<k;
        return 0;
        
    }
    a[n+1]=k;
    sort(a+1,a+n+2);
    for(long long i=1;i<=n+1;i++)
    {
        if(a[i]==k) dem=min(dem,i);
    }
    cout<<dem<<'\n';
    for(int i=1;i<=n+1;i++)
        cout<<a[i]<<" ";
}
