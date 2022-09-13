#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s;

int main()
{
    freopen("CP.inp","r",stdin);
    freopen("CP.out","w",stdout);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
        if(a[i] == (long long)(sqrt(a[i])) * (long long)(sqrt(a[i])))
            s=s+a[i];
    }
    cout<<s;
}
