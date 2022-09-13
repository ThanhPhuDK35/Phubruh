#include<bits/stdc++.h>
using namespace std;
long long n, s, a[10000001], x;

int main()
{
    freopen("homework.inp","r",stdin);
    freopen("homework.out","w",stdout);
    cin>>n>>s;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        if(s >= a[i])
        {
            s=s+a[i];
            x++;
        }
        else
        {
            cout<<x;
            return 0;
        }
    }
    cout<<n;
}
