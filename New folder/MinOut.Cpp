#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], d[10000001], x, ii;
int main()
{
    freopen("MinOut.inp","r",stdin);
    freopen("MinOut.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        x=a[i];
        d[x]=1;
        while(d[ii]>0)
            ii++;
        cout<<ii<<"\n";
    }
}
