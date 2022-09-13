#include<bits/stdc++.h>
using namespace std;
long long n;
long double s;

int main()
{
    freopen("ContiFrac.inp","r",stdin);
    freopen("ContiFrac.out","w",stdout);
    cin>>n;
    s=2;
    for(int i=1; i<=n; i++)
    {
        s=1/s;
        s=s+1;

    }
    cout<<setprecision(6)<<fixed<<s;
}
