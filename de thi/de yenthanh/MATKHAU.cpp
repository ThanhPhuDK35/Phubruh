#include<bits/stdc++.h>
using namespace std;
long long ma=-1e18, mi=1e18;
string n;

int main()
{
    freopen("MATKHAU.inp","r",stdin);
    freopen("MATKHAU.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        long long k=n[i]-'0';
        ma=max(ma,k);
        mi=min(mi,k);
    }
    cout<<ma<<mi;
}
