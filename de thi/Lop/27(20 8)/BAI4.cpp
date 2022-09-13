#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], d, x, i, j, y;

int main()
{
    freopen("BAI4.inp","r",stdin);
    freopen("BAI4.out","w",stdout);
    cin>>n;
    a[1]=1;
    i=1; j=1; d=1;
    while(i<n && j<n)
    {
        x=2*a[i]+1; y=3*a[j]+1;
        if(x<y)
        {
            d++;
            a[d]=x;
            i++;
        }
        if(x == y)
        {
            d++;
            a[d]=x;
            i++; j++;
        }
        if(x > y)
        {
            d++;
            a[d]=y;
            j++;
        }
    }
    cout<<a[n];
}