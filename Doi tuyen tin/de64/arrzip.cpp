#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[1000001], x;
map<long long, long long> s;

int main()
{
    freopen("arrzip.inp","r",stdin);
    freopen("arrzip.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {sd
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1, b+1+n);
    x=1;
    s[b[1]]=x;
    for(int i=2; i<=n; i++)
    {
        if(b[i] != b[i-1])
        {
            x++;
            s[b[i]] = x;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<s[a[i]]<<" ";
    }
}
