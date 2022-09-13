#include<bits/stdc++.h>
using namespace std;
long long n, s, dem=0, k;

int main()
{
    freopen("Divide.inp","r",stdin);
    freopen("Divide.out","w",stdout);
    cin>>n;
    k=sqrt(n);
    for(int i=1; i<=k ; i++)
    {
        s+=n/i;
    }
    cout<<2*s-k*k;
}
