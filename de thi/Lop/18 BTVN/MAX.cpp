#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s, m;

int main()
{
    freopen("MAX.inp","r",stdin);
    freopen("MAX.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    a[n+1]=0;
    s=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i] == a[i+1])
        {
            s++;
        }
        if(a[i] != a[i+1])
        {
            if(m<s) m=s;
            s=1;
        }
    }
    cout<<m;
}
