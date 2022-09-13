#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 10000001
ll x,y,z,n,a,b;
bool nt[nmax];
void sieve()
{
    memset(nt,true,nmax);
    nt[0]=nt[1]=false;
    for (ll i=1;i<=sqrt(nmax);i++)
    {
        if (nt[i])
        {
            for (ll j=i+i;j<=nmax;j+=i)
                if (nt[j]) nt[j]=false;
        }
    }
}
int main(){
    freopen("SegPrime.inp","r",stdin);
    freopen("SegPrime.out","w",stdout);
    sieve();
    cin>>n;
    x = n;
    while(x)
    {
        if(nt[x])
        {
            a = x; break;
        }
        x--;
    }
    while(n)
    {
        if(nt[n])
        {
            b = n; break;
        }
        n++;
    }
    cout<<a<<' '<<b;
}
