#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x,y,z;
int main()
{
    freopen("TBG.inp","r",stdin);
    freopen("TBG.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>x>>y>>z;
    if(x<=y)
    {
        cout<<0;
        return 0;
    }
    else
    {
        ll tong=x*z;
        ll giay=y*z;
        if((tong-giay)%y==0)
            cout<<(tong-giay)/y;
        else cout<<(tong-giay)/y+1;
    }
}
