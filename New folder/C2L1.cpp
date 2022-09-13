#include<bits/stdc++.h>
using namespace std;
long long n, x, d[1000001], ans=0;

bool check(int x, int y)
{
    int x0, x1, y0, y1;
    x0=x%10; x1=x/10;
    y0=y%10; y1=y/10;
    if(x0 == y0 && x1 != y1) return true;
    if(x0 != y0 && x1 == y1) return true;
    return false;
}

int main()
{
    //freopen("C2L1.inp","r", stdin);
    //freopen("C2L1.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        d[x]++;
    }
    for(int x=10; x<=99; x++)
        for(int y=x+1; y<= 99; y++)
        if(check(x, y))
             ans=ans+1LL*d[x]*d[y];
    cout<<ans;

}
