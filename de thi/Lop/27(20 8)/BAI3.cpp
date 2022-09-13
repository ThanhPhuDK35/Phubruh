#include<bits/stdc++.h>
using namespace std;
long long n, a[300001], s, m, r, d, j;

int main()
{
    freopen("BAI3.inp","r",stdin);
    freopen("BAI3.out","w",stdout);
    cin>>n>>r;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(long long i=1; i<=n; i++)
    {
        while(j <= n)
        {
            if(a[j]-a[i] > r)
            {
                d=d+ n-j+1;
                break;
            } j++;
        }
    }
    cout<<d;
}