#include<bits/stdc++.h>
using namespace std;
long long n;
long double s;

int main()
{
    freopen("NestSqrt.inp","r",stdin);
    freopen("NestSqrt.out","w",stdout);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+2;
        s=sqrt(s);
    }
    cout<<setprecision(6)<<fixed<<s;
}
