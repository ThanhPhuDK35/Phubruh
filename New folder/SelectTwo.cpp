#include<bits/stdc++.h>
using namespace std;
long long n, m, a[1000001], b[100001], x, j, ans, i;

int main()
{
    freopen("SelectTwo.inp","r",stdin);
    freopen("SelectTwo.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    sort(a+1, a+1+n);
    sort(b+1, b+1+m);
    j=1;
    ans=-(2e9);
    i=j=1;
    while(i<=n && j<=m)
    {
        if(a[i]==b[j])
        {
            ans=2*a[i];
            i++;
            j++;
        }
        else
            if(a[i]<b[j])
               i++;
            else
               j++;
    }
    if(ans==-2e9)
        cout<<"NO";
    else
        cout<<ans;
}
