#include <bits/stdc++.h>
using namespace std;
long long a,b,t;

int main()
{
    freopen("Downto0.INP","r",stdin);
    freopen("Downto0.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if (a>b) swap(a,b);
        if ((a+b)%3==0&&2*a>=b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
