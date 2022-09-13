#include<bits/stdc++.h>
using namespace std;
long long x, y, k, dem=0;

int main()
{
    freopen("CHIAQUA.inp","r",stdin);
    freopen("CHIAQUA.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>x>>y;
    k=__gcd(x,y);
    for(int i=1;i*i<=k;i++)
    {
        if(k%i==0) 
            dem+=2;
    }
    long long p=sqrt(k);
    if(p*p==k) 
        dem--;
    cout<<dem;
}
