#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], t, p;

int main()
{
    cin>>n;
    cout<<0-n;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i>=0-n;i--)
    {
        a[i]=a[i+n];
    }
    for(int i=1; i<=n;i++)
    {
        for(int j=i; j>=0-n/2; j--)
            t=t*10+j;
        for(int x=i; j>=0-n/2; j--)
        for(int x=i; j>=0-n/2; j--)
            t=t*10+j;
    }
}
