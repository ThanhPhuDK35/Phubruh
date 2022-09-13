#include<bits/stdc++.h>
using namespace std;
long long n,s=0,x=5;
int main()
{
    freopen("Giaithua.Inp","r",stdin);
    freopen("Giaithua.Out","w",stdout);
    cin>>n;
    while(x<=n)
    {
        s=s+n/x;
        x=x*5;
    }
    cout<<s;
}
