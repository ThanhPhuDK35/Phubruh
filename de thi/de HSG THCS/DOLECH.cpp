#include<bits/stdc++.h>
using namespace std;
long long n, a[2000005], mi=1e18, s, e=0, d[2000005];
bitset<20> b;

void solve()
{
    long long l=0, r=0;
    for(int i=0; i<n; i++)
    {
        if(b[i]==1) 
            l+=a[i];
        else    
            r+=a[i];
    }
    d[e++] = abs(l-r);
    mi = min(mi, abs(l-r));
}

int main()
{
    freopen("DOLECH.INP", "r", stdin);
    freopen("DOLECH.OUT", "w", stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i < pow(2,n); i++)
    {
        b=bitset<20>(i);
        solve();
    }
    for(int i=1; i<=e; i++)
    {
        if(d[i] == mi) 
            s++;
    }
    cout<<mi<<" "<<s/2;
}
