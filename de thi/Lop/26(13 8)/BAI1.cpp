#include<bits/stdc++.h>
using namespace std;
long long n, k, b, s, a[10000001], e;

int main()
{
    cin>>n>>k>>b;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    while(b > n)
    {
        b=b-n;
    }
    e=1;
    for(int i=1; i<=k; i++)
    {
        s=s+a[e];
        if(i > n)
        {
            e=e-n;
        }
        e++;
    }
    cout<<s;
}