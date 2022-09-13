#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s, e, t, i;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n, greater<int>());
    e=a[1];
    s=1;
    i=1;
    while(e>0 && i<=n)
    {
        s++;
        e=min(a[i], e);
        e--;
        i++;
    }
    cout<<s;
}
