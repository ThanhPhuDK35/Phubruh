#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct PS
{
    int tu,mau;
};
void rutgon(PS &p)
{
    if(p.mau<0)
    {
        p.tu=-p.tu;
        p.mau=-p.mau;
    }
    int uoc=__gcd(p.tu,p.mau);
    p.tu/=uoc;
    p.mau/=uoc;

}
bool PSLN(PS p, PS q)
{
    rutgon(p);
    rutgon(q);
    return(p.tu*q.mau<p.mau*q.tu);
}
ll n;
PS a[1000005];
int main()
{
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i].tu>>a[i].mau;
        rutgon(a[i]);
    }
    sort(a+1,a+1+n,PSLN);
    for(ll i=1;i<=n;i++)
        cout<<a[i].tu<<" "<<a[i].mau<<endl;
}
