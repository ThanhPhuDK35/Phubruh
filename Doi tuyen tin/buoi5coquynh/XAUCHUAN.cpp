#include<bits/stdc++.h>
using namespace std;
string n[10000001], s;
long long d;

int main()
{
    freopen("XAUCHUAN.INP","r",stdin);
    freopen("XAUCHUAN.OUT","w",stdout);
    d=0;
    while(cin>>s)
    {
        n[d]=s;
        d++;
    }
    for(int i=0; i<=d; i++)
    {
        cout<<n[i]<<" ";
    }
}

