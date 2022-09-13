#include<bits/stdc++.h>
using namespace std;
long long s, n, b, c;
long long a[100000000];
long long haha(long long x)
{
    b=0;
    c=0;
    while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        c=c+b;
    }
    return c;
}

int main()
{
    cin>>n;
    s=0;
    for(long long   i=0; i < n; i++)
    {
       cin>>a[i];
       s=s+haha(a[i]);
    }
    cout<<s;
}
