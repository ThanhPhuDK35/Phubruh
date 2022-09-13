#include<bits/stdc++.h>
using namespace std;
long long p, a, b, c, n, a1, b1, c1;

int main()
{
    freopen("BaChuSo.inp","r",stdin);
    freopen("BaChuSo.out","w",stdout);
    cin>>p;
    a=p%10;
    p=p/10;
    b=p%10;
    p=p/10;
    c=p%10;
    p=p/10;
    a1=b*100+c*10+a;
    b1=a*100+b*10+c;
    c1=c*100+a*10+b;
    cout<<a1+b1+c1;
}