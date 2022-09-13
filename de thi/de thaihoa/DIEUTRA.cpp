#include<bits/stdc++.h>
using namespace std;
long long a[10];

int main()
{
    freopen("DIEUTRA.inp", "r", stdin);
    freopen("DIEUTRA.out", "w", stdout);
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1, a+1+3);
    cout<<a[2];
}