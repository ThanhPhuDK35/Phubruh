#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001], j, dem, s;

int main()
{
    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=0;
    dem=0;
    j=0;
    for(int i=1; i<=n; i++)
    {
        s=s+a[i];
        while(s > k)
        {
            s=s-a[++j];
        }
        dem+=i-j;
    }
    cout<<dem;
}   


