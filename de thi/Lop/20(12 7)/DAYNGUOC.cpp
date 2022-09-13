#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001];

long long bd(long long x)
{
    long long b=0, c=0;
    while(x>0)
    {
        b=x%10;
        x=x/10;
        c=c*10+b;
    }
    return c;
}

int main()
{
    freopen("DAYNGUOC.inp","r",stdin);
    freopen("DAYNGUOC.out","w",stdout);
    while(cin>>k>>n)
    {
        memset(a , 0 , sizeof(a));
        a[0]=k;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
            a[i+1]=bd(a[i]+k);
        }
        cout<<"\n";
    }
}
