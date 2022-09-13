#include<bits/stdc++.h>
using namespace std;
long long t, l, r, a, b, uc, ac, bc;

int main()
{
    freopen("countdiv.inp","r",stdin);
    freopen("countdiv.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a>>b;
        long long daua, cuoia, daub, cuoib, dauab, cuoiab, ab;
        ab = (a*b)/__gcd(a, b);
        daua=(l/a)*a;
        if(daua != l)
        {
            daua += a;
        }
        daub = (l/b)*b;
        if(daub != l)
        {
            daub += b;
        }
        dauab = (l/ab)*ab;
        if(dauab != l)
        {
            dauab += ab;
        }
        cuoia = (r/a) * a;
        cuoib = (r/b)*b;
        cuoiab=(r/ab)*ab;
        cout<<((cuoia - daua)/a +1) + ((cuoib-daub)/b + 1) - ((cuoiab - dauab)/ab +1)<<"\n";
    }
}