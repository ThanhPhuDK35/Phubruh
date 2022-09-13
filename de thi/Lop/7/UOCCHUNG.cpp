#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], s;

int main()
{
    //freopen("UOCCHUNG.INP","r",stdin);
    //freopen("UOCCHUNG.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long d=0;
    for(int i=1; i<n-1; i++)
    {
          s=__gcd(a[i], a[i+1]);

    }
    cout<<s;
}
