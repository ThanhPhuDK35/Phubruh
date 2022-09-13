#include<bits/stdc++.h>
using namespace std;
long long n, a[200001], x, b[200001], s;

int main()
{
    freopen("MinX.inp","r",stdin);
    freopen("MinX.out","w",stdout);
    cin>>n;
    x=1;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    x=a[1]*a[n];
    s=1;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            b[s]=i;
            s++;
            if(x/i != i)
            {
              b[s]=x/i;
              s++;
            }

        }
    }
    sort(b+1, b+s);
    if(s-3 == n)
    {
        for(int i=2; i<=s-3; i++)
        {
            if(b[i] != a[i-1])
            {
                cout<<"-1";
                return 0;
            }
        }
        cout<<x;
    }
    else
        cout<<"-1";
}
