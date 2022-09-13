#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], s=0;

int main()
{
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    cin>>n;
    for(int i=1; i<= n; i++)
    {
        cin>>a[i];
    }
    for(int i=2; i<=n-1; i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1])
            s++;
    }
    cout<<s;

}
