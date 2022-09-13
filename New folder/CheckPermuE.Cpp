#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s=0;

int main()
{
    freopen("CheckPermuE.inp","r",stdin);
    freopen("CheckPermuE.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        if(a[i] != i)
        {
            cout<<"No";
            s=1;
            break;

        }
    }
    if(s==0)
        cout<<"Yes";
}
