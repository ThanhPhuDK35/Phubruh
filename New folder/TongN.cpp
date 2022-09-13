#include<bits/stdc++.h>
using namespace std;
long long s=0, n;

void inra(long long n)
{
    if(n==0) return;
    else
    {
        s=s+n;
        inra(n-1);
    }
}

int main()
{
    freopen("TongN.inp","r",stdin);
    freopen("TongN.out","w",stdout);
    cin>>n;
    inra(n);
    cout<<s;
}
