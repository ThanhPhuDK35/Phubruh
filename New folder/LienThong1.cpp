#include<bits/stdc++.h>
using namespace std;
long long n, x, a[1000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("LienThong1.inp","r",stdin);
    freopen("LienThong1.out","w",stdout);

    cin>>n>>x;
    a[0]=0;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    int i, j;
        i=j=x;
    while(i>=1 && a[i]==a[x])i--;i++;

    while(j<=n && a[j]==a[x])j++; j--;

    cout<<i<<" "<<j;
}
