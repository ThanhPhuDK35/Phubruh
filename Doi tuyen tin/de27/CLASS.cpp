#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], b[10001], kq;
map<long long, long long> s;

long long du(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s++;
            if(x/i != i)
            s++;
        }
    }
    return s;
}

int main()
{
    freopen("CLASS.inp","r",stdin);
    freopen("CLASS.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=du(a[i]);
        s[b[i]]++;
    }
    sort(b+1, b+1+n);
    b[0]=0; kq=0;
    for(int i=1; i<=n; i++)
    {
        if(b[i] != b[i-1])
            kq++;
    }
    cout<<kq<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(b[i] != b[i-1])
            cout<<b[i]<<" "<<s[b[i]]<<"\n";
    }
}