#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    freopen("TDD.Inp","r",stdin);
    freopen("TDD.Out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    s=a[1];
    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
            s=s+a[i];
        else
            s=s-a[i];
    }
    cout<<s;
}
