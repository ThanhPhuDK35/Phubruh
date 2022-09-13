#include<bits/stdc++.h>
using namespace std;
long long n, a1, a2, a3, mod=2021;

int main()
{
    freopen("SQROOT.INP","r", stdin);
    freopen("SQROOT.OUT","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    a1=n; a2=n+1; a3=2*n+1;
    if(a1%2==0) a1=a1/2;
    else a2=a2/2;
    if(a1%3==0) a1=a1/3;
    else if(a2%3==0) a2=a2/3;
    else a3=a3/3;
    cout<<((a3%mod)*(a1%mod)*(a2%mod))%mod;
}
