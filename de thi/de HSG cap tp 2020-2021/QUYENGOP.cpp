#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], m=0;
map<long long, long long> s;

int main()
{
    freopen("QUYENGOP.inp","r",stdin);
    freopen("QUYENGOP.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
        m=max(m, a[i]);
    }
    cout<<s[m]<<"\n"<<m;
}
