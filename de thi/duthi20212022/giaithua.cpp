#include<bits/stdc++.h>
using namespace std;
long long n, tong;

int main()
{
    freopen("giaithua.inp","r",stdin);
    freopen("giaithua.out","w",stdout);
    cin>>n;
    tong=0;
    while(n > 0)
    {
        tong=tong + (n/5);
        n=n/5;
    }
    cout<<tong;
}