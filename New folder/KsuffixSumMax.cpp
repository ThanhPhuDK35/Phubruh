#include<bits/stdc++.h>
using namespace std;
long long x, y, z, n, a[1000001], b[100000001], k;

int main()
{
   // freopen("KsuffixSumMax.inp","r",stdin);
    //freopen("KSuffixSumMax.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    x = 0;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        x =x + a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        b[i] = x;
        x =x - a[i];
    }
    sort(b+1,b+1+n,greater<int>());
    y = 0;
    for(int i = 1; i <= k; i++)
    {
        y = y + b[i];
    }

    cout<<y;
}
