#include<bits/stdc++.h>
using namespace std;
long long n, a[10000009], m, s;

int main()
{
    freopen("SelectApple2.inp","r",stdin);
    freopen("SelectApple2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=1;
    sort(a+1, a+1+n);
    for(int i=2; i<=n; i++)
    {
        if(a[i] != a[i-1])
        {
            m=max(m, s);
            s=0;
        }
        s++;
    }
    cout<<m;
}
