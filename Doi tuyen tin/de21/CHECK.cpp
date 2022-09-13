#include<bits/stdc++.h>
using namespace std;
long long n, a, b;

int main()
{
    freopen("CHECK.inp","r",stdin);
    freopen("CHECK.out","w",stdout);
    cin>>n;
    a=a+n%10;
    n=n/10;
    a=a+n%10;
    n=n/10;
    b=b+n%10;
    n=n/10;
    b=b+n%10;
    if(a == b)
        cout<<"YES";
    else
        cout<<"NO";
}