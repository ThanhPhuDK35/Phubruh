#include<bits/stdc++.h>
using namespace std;
long long s, n, a[10000001];

long long sln(long long x)
{
    long long m, b;
    m=0;
    while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        m=max(m, b);
    }
    return m;
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+sln(a[i]);
    }
    cout<<s;

}
