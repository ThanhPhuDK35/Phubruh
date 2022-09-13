#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
int main()
{
    freopen("DAYSO.INP","r",stdin);
    freopen("DAYSO.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>k;
    while(k--)
    {
        cin>>n;
        cout<<(((n+1)%10)*((n+1)%10))%10<<'\n';
    }
}
