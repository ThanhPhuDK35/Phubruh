#include<bits/stdc++.h>
using namespace std;
long long n, i, s, dem;

int main()
{
    freopen("NgoKhong.inp","r",stdin);
    freopen("NgoKhong.out","w",stdout);
    cin>>n;
    while(n > 0)  {n=n/2;s++;}
    i=1;
    while(s>=1)  {i=i*2; dem=dem+i; s--;}
    cout<<dem/2;

}
