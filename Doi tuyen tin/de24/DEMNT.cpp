#include<bits/stdc++.h>
using namespace std;
long long n, a[2000005], s, kq;
map<long long, long long> dem;
bitset<20> b;

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

void solve()
{
    long long s=0, e=0;
    for(int i=0; i<n; i++)
    {
        if(b[i]==1)
            s=s*10+a[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        if(b[i] == 0)
            e=e*10+a[i];
    }
    if(nto(s) == true && dem[s]==0)
    {
        kq++;
    }
    if(nto(e) == true && dem[e]==0 && e != s)
    {
        kq++;
    }
    dem[s]++; dem[e]++;
}

int main()
{
    freopen("DEMNT.inp","r",stdin);
    freopen("DEMNT.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    kq=0;
    for(int i=0; i < pow(2, n); i++)
    {
        b=bitset<20>(i);
        solve();
    }
    cout<<kq;
}
