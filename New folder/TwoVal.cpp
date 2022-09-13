#include<bits/stdc++.h>
using namespace std;
long long n, a[5000001], ans;
int main()
{
    freopen("Twoval.inp","r", stdin);
    freopen("Twoval.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long i=1, j=1;
    long long x, nx, y, ny;
    a[n+1]=a[1]+1;
    for(int i=2; i<=n+1; i++)
    {
        if(a[i] != a[1])
        {
            j=i;
            break;
        }
    }
    if(j == n+1)
    {
        cout<<0;
        return 0;
    }
    x=a[1], y=a[j];
    nx=j-1; ny=1;
    ans=j;
    while(j <= n)
    {
        ans=max(ans, j-i+1);
        j++;
        if(j>n) break;
        if(a[j] == x) nx++;
        if(a[j] == y) ny++;
        if(a[j] != x && a[j] != y)
        {
            while(nx>0 && ny>0)
            {
                if(a[i] == x) nx--;
                else ny--;
                i++;
            }
            if(nx==0)
            {
                x=a[j];
                nx=1;
            }
            else
            {
                y=a[j];
                ny=1;
            }
        }
    }
    cout<<ans;
}
