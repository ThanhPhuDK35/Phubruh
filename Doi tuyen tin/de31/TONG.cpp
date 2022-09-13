#include<bits/stdc++.h>
using namespace std;
long long t, a[1000001];

long long bp(long long n)
{
    long long k, s1, s2;
    k=2*n+1;
    s1=4*n*(n+1)*k/6;
    s2=k*(k+1)*(2*k+1)/6;
    return s2-s1;
}

int main()
{
    freopen("TONG.Inp", "r", stdin);
    freopen("TONG.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=t; i++)
    {
        cout<<bp(a[i])<<"\n";
    }
}
