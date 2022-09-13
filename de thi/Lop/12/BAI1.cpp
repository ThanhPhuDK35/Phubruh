#include<bits/stdc++.h>
using namespace std;
long long n, s, a, b;

int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    cin>>a;
    while(a>0)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
    cout<<s;
}
