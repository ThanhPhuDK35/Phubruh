#include<bits/stdc++.h>
using namespace std;
long long a, b, k, x, y, n;

int main()
{
    freopen("UNIT.inp","r", stdin);
    freopen("UNIT.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>k>>b>>n;
    x=k+b;
    y=a%10;
    for(int i=2; i<=n; i++)
    {
        if(a%x == 0)
        {
            a=k*(a%x)+1;
            y=k*y+1;
        }
        else
        {
            a=b*(a%x)+2;
            y=b*y+2;
        }
        y=y%10;
    }
    cout<<y;
}
