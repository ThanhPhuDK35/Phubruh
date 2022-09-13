#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], b[1000001], x;

int main()
{
       freopen("SumPairs.inp","r",stdin);
     freopen("SumPairs.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    x=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            b[x]=a[i]+a[j];
            x++;
        }

    }
    sort(b+1, b+x);
    for(int i=1; i<x; i++)
    {
        cout<<b[i]<<" ";
    }
}
