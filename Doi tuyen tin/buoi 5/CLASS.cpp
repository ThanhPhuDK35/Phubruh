#include<bits/stdc++.h>
using namespace std;
long long n, a[1001], b[1001], c[1001], e, z;

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s++;
            if(x/i != i)
            s++;
        }
    }
    return s;
}

int main()
{
    freopen("CLASS.inp","r",stdin);
    freopen("CLASS.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i] = uoc(a[i]);
    }
    sort(b+1, b+1+n);
    c[1] = b[1];
    e=2;
    for(int i=2; i<=n; i++)
    {
        if(b[i] != b[i-1])
        {
            c[e] = b[i];
            e++;
        }
    }
    cout<<e-1<<"\n";
    sort(c+1, c+e);
    for(int i=1; i<=e-1; i++)
    {
        cout<<c[i]<<" ";
        z=0;
        for(int j=1; j<=n; j++)
        {
            if(uoc(a[j]) == c[i])
                z++;
        }
        cout<<z<<"\n";
    }

}
