#include<bits/stdc++.h>
using namespace std;
long long n, a[10001], b[10001], s;

int main()
{
    freopen("XSA.inp","r",stdin);
    freopen("XSA.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i] >= 0)
        {
            s++;
            b[s]=a[i];
        }
    }
    sort(b+1, b+1+s);
    for(int i=1; i<=s; i++)
    {
        cout<<b[i]<<" ";
    }
}
