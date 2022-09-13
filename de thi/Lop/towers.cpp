#include <bits/stdc++.h>
using namespace std;
long long n, s, gach, t;

int main()
{
    freopen("towers.inp","r",stdin);
    freopen("towers.out","w",stdout);
    cin>>n;
    gach=1;
    t=1;
    s=1;
    for(int i=2; i<=n; i++)
    {
        s++;
        t=t+s;
        gach=t+gach;
    }   
    cout<<gach;
}