#include<bits/stdc++.h>
using namespace std;

long long a[1000005];
long long X[1000005];
long long n;
long long res=0;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        long long x=lower_bound(X+1,X+res+1,a[i])-X;
        X[x]=a[i];
        res=max(res,x);
    }
    cout<<res;
}
