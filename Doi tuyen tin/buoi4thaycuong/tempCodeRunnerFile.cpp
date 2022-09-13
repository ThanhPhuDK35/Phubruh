#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001];

long long ma(long long l, long long r, long long b[])
{
    sort(b+l+1, b+r+1);
    return b[r];
}

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        long long i, j;
        cin>>i>>j;
        cout<<ma(i, j, a)<<"\n";
    }
}