#include<bits/stdc++.h>
using namespace std;
long long a[100000001], x, s;

int main()
{
    freopen("Hatvung.inp","r",stdin);
    freopen("Hatvung.out","w",stdout);
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1, a+4);
    if((a[1]+a[3])/2 <= a[2]) cout<<(a[1]+a[3])/2;
    else cout<<(a[1]+a[2]+a[3])/3;
}