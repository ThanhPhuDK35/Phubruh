#include<bits/stdc++.h>
using namespace std;
long long t, x, y, n;

int main()
{
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        if(n%2 == 0)
        {
            x=x*2;
            y=y*2;
            cout<<max(x, y) / min(x, y)<<"\n"   ;
        }
        else
        {
            x=x*2;
            cout<<max(x, y) / min(x, y)<<"\n";
        }
    }
}