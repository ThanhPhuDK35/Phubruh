#include<bits/stdc++.h>
using namespace std;
long long n, m, x, a[1000001], dem;
string s;

int main()
{
    freopen("xepphong.Inp", "r", stdin);
    freopen("xepphong.Out", "w", stdout);
    cin>>n>>m;
    dem=0;
    while(m--)
    {
        cin>>x;
        while(x >= 2)
        {
            x=x-2;
            dem++;
            a[dem]=2;
            if(dem == n) break;
        }
        if(x == 1 && dem < n)
        {
            dem++;
            a[dem]=1;
        }
        if(x == 1 && dem == n)
        {
            for(int i=1; i<=n; i++)
            {
                if(a[i] == 1)
                {
                    a[i]=a[i]+1;
                    break;
                }
            }
        }
        if(x > 1 && dem == n)
        {
            for(int i=1; i<=n; i++)
            {
                if(a[i] == 1)
                {
                    a[i]=a[i]+1;
                    x--;
                }
                if(x==0)
                {
                    break;
                }
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<"\n";
    }
}