#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    freopen("ReformSum.inp","r",stdin);
    freopen("ReformSum.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }

    sort(a+1, a+1+n);
    if(a[1]<0)
    {
        s=s-a[1];
    }
    cout<<s;

}
