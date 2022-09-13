#include<bits/stdc++.h>
using namespace std;
long long n, a[100000], b[100000], s=0;

int main()
{
    freopen("BalanceSequence.inp","r",stdin);
    freopen("BalanceSequence.out","w",stdout);
    cin>>n;
    for(int i=0; i<n;i++)
        cin>>a[i];
    for(int i=0; i<n;i++)
        cin>>b[i];
    s=0;
    for(int i=0; i<n;i++)
        s=s+abs(a[i]-b[i]);
    cout<<s;
}
