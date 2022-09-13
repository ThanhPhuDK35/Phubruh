#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], b[100000001], s;

int main()
{
    freopen("PermuArrMax.inp","r",stdin);
    freopen("PermuArrMax.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    sort(b+1, b+1+n);
    sort(a+1, a+1+n, greater<int>());
    for(int i=1; i<=n; i++)
    {
        s=s+abs(b[i] - a[i]);
    }
    cout<<s;
}
