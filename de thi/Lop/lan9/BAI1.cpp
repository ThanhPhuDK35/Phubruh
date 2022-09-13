#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], dem, b[1000001];
map<long long, long long> s;

int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        s[a[i]]++;
    }
    sort(a+1, a+1+n);
    dem = 0;
    a[0]=-1e18;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1])
            dem++;
    }
    cout<<dem<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(s[b[i]] > 0)
        {
            cout<<b[i]<<" ";
            s[b[i]]=0;
        }
    }
}