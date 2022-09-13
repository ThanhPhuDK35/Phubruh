#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];
map<long long, long long> s;

int main()
{
    freopen("tanso.inp","r",stdin);
    freopen("tanso.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    sort(a+1, a+1+n);
    a[0]=-1e18;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1])
            cout<<a[i]<<" "<<s[a[i]]<<"\n";
    }
}
