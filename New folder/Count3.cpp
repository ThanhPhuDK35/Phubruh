#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    freopen("Count3.inp","r",stdin);
    freopen("Count3.out","w",stdout);
    cin>>n;
    s=1;
    for(int i=1; i<=n; i++)
    {
        if(i == 1)
           s=s*3;
        else
           s=s*2;
    }
    cout<<s;
}