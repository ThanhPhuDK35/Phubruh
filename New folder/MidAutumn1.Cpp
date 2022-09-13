#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s;

int main()
{
    freopen("MidAutumn1.inp","r",stdin);
    freopen("MidAutumn1.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    s=1;
    for(int i=2; i<=n; i++)
    {
        if(a[i] != a[i-1])
            s++;
    }
    cout<<s;
}
