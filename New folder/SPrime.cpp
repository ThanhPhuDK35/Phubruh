#include<bits/stdc++.h>
using namespace std;
long long n, x, e, a[100001];
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

void inra()
{
    long long s=0;
    for(int i= n-1; i>= 0; i--)
    {
          if(b[i]==1)
             {s=s+a[i];}
    }
    if(nto(s)==true)
       e++;
}

int main()
{
    freopen("Sprime.inp","r",stdin);
    freopen("Sprime.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    x=1<<n;
    for(int i=0; i<x; i++)
    {
        b = bitset<20>(i);  
        inra();
    }
    cout<<e;
}