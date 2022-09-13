#include<bits/stdc++.h>
using namespace std;
struct PS
{
    int tu,mau;
};
PS p,q,r;

int main()
{
    cin>>p.tu>>p.mau;
    cin>>q.tu>>q.mau;
    r.tu=q.tu*p.mau+q.mau*p.tu;
    r.mau=q.mau*p.mau;
    int tam=__gcd(r.tu,r.mau);
    cout<<r.tu/tam<<" "<<r.mau/tam;
}
