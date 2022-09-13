#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[1000001], d;

bool nt(long long x)
{
    long long s=0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
          return false;
     return x>1;

}

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    d=0;
    for(int i=0; i<n; i++)
    {
        if(nt(a[i]))
        {
            b[d]=a[i];
            d++;
        }

    }
    if(d=0)
        cout<<"-1";
    else
    {
        sort(b, b+d);
        for(int i=0; i< d; i++)
        {
            cout<<a[i];
        }
    }

}
