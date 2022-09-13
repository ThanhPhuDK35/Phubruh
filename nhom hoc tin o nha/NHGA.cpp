#include<bits/stdc++.h>
using namespace std;
long long a[1000001], b[1000001], n ;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n, greater<int>());
    for(int i=1; i<=n-1; i++)
    {
        b[i]=a[i]-a[i+1];
    }
    sort(b+1, b+n);
    cout<<b[1];
}
