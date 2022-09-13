#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];

long long r(long long x)
{
    for(int i=sqrt(x); i>=1; i--)
    {
        if(x%(i*i) == 0)
        {
            return i;
            break;
        }
    }
}

int main()
{
    freopen("RGC.inp","r",stdin);
    freopen("RGC.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }
    for(int i=1; i<=n; i++)
    {
        cout<<r(a[i])<<" "<<a[i]/(r(a[i]) * r(a[i]))<<"\n";
    }
}
