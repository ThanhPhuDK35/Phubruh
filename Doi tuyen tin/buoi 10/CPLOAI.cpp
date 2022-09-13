#include <bits/stdc++.h>
using namespace std;
long long n, a[100001], b[100001], s;

int main()
{
    freopen("CPLOAI.INP","r",stdin);
    freopen("CPLOAI.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    a[0] = 0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1])
        {
            s++;
            b[s] = a[i];
        }
    }
    cout<<s<<"\n";
    for(int i=1; i<=s; i++)
    {
        cout<<b[i]<<" ";
    }
}
