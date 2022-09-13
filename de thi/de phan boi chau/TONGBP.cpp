#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s;

int main()
{
    freopen("TONGBP.inp","r",stdin);
    freopen("TONGBP.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<(a[i]*(a[i]+1)*(2*a[i]+1))/6<<"\n";;
    }
}
