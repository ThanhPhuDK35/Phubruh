#include<bits/stdc++.h>
using namespace std;
long long n, q, a[10000001], b[10000001], c[10000001];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>b[i]>>c[i];
    }
    for(int i=1; i<=q; i++)
    {
        cout<<min(a[b[i]], a[c[i]])<<"\n";
    }
}
