#include<bits/stdc++.h>
using namespace std;


long long scs(long long n)
{
    int d=0;
    while(n>0)
    {
        d=d+n%10;
        if(d>10) 
        return false;
        n=n/10;
    }
    if(d==10)
    return true;
    return false;
}
long long d=0, n, i;    
int main()
{
    freopen("perfectnum.inp","r",stdin);
    freopen("perfectnum.out","w",stdout);
    cin>>n;
    for( i=19; i<=100000010; i=i+9)
    {
        if(scs(i))
        d++;
        if(d==n)
        break;
    }
    cout<<i;
}