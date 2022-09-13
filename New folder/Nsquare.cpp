#include<bits/stdc++.h>
using namespace std;
long long n, y, s=0;
const int mod=1e9+7;

int main()
{
    freopen("Nsquare.inp","r",stdin);
    freopen("Nsquare.out","w",stdout);
    cin>>n;
    for(int e=1; e<=sqrt(n); e++)
    {
        s=s+1+(n/e-e)/2;
        s=s%mod;
    }
    cout<<s;
}