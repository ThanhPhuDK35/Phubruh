#include<bits/stdc++.h>
using namespace std;
long long a, b, S=0, k;

int main()
{
    freopen("TongUoc.inp","r",stdin);
    freopen("TongUoc.OUT","w",stdout);
    cin>>a>>b;
    if(b%3!=0)
    {
        cout<<0;
        return 0;
    }
    b=b/3;
    k=__gcd(a,b);
    for(int i=1;i<=sqrt(k);i++)
    {
        if(k%i==0) 
            S+=k/i+i;
    }
    long long p=sqrt(k);
    if(p*p==k) 
        S-=p;
    cout<<S;
}