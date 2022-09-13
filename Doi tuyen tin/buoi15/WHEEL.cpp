#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];

int main()
{
	freopen("wheel.inp","r",stdin);
	freopen("wheel.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=2; i<=n; i++)
    {
        cout<<a[1]/__gcd(a[1], a[i])<<"/"<<a[i]/__gcd(a[1], a[i])<<"\n";
    }
}