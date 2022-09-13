#include<bits/stdc++.h>
using namespace std;
long long a, b;

int main()
{
    freopen("tongdoan.inp","r",stdin);
    freopen("tongdoan.out","w",stdout);
    cin>>a>>b;
    cout<<(a+b)*(b-a+1)/2;
}