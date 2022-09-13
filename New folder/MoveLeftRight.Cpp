#include<bits/stdc++.h>
using namespace std;
long long x, k, d, y, f;

int main()
{
    freopen("MoveLeftRight.inp","r",stdin);
    freopen("MoveLeftRight.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>k>>d;
    x=abs(x);
    long long e=x/d;
    if(e>=k)
    {
          cout<<x-k*d;
          return 0;
    }
    y=x-e*d;
    f=k-e;
    if(f%2==0) cout<<y;
    else cout<<d-y;
}
