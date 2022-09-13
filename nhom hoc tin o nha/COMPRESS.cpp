#include <bits/stdc++.h>
using namespace std;
long long n, b[100001], a[100001], x;
map<long long, long long> s;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1, b+1+n);
    x=1; b[0]=b[1];
    for(int i=1; i<=n; i++)
    {
        if(b[i] != b[i-1])
           x++;
        s[b[i]]=x;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<s[a[i]]<<" ";
    }
}