#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], mi;

void dequy(long long i)
{
    if (i == 0) return;
    else
    {
        mi = min(mi, a[i]);
        dequy(i-1);
    }
}

int main()
{
    freopen("MINARR.inp","r",stdin);    
    freopen("MINARR.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    dequy(n);
    cout<<mi;
}