#include<bits/stdc++.h>
using namespace std;
long long b, c, m, n, k, s;

long long ts(long long e)
{
    c=0;
    while(e > 0)
    {
        b = e % 10;
        e = e / 10;
        c=c+b;
    }
    return c;
}

bool nt(long long x)
{
    long long f=0;
    for(int i=2; i*i<=x; i++)
          if(x%i==0)
                  return false;
     return x>1;
}


int main()
{
    freopen("NGUYENTO.inp","r",stdin);
    freopen("NGUYENYO.out","w",stdout);

    cin>>m>>n>>k;
    s=0;
    for(int i=m+1; i<n; i++)
    {
        if(ts(i)%k==0 && nt(i)==true)
            s++;
    }
    cout<<s;
}

