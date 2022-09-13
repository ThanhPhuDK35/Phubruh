#include<bits/stdc++.h>
using namespace std;
long long p, n, k, s=0;

int main()
{
    freopen("MUACO.Inp", "r", stdin);
    freopen("MUACO.Out", "w", stdout);
    cin>>p>>n>>k;
    s=(n*(n+1)/2)*k;
    if(s<=p)
        cout<<"YES";
    else cout<<"NO"<<"\n"<<s-p;
}
