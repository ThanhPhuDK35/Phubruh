#include<bits/stdc++.h>
using namespace std;
long long m, n, s, d = 0;
long long a[60][60];

int main()
{
    freopen("CH.inp","r",stdin);
    freopen("CH.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            for(int x=1; x<=i; x++)
            {
                for(int y=1; y<=j;y++)
                {
                    s=0;
                    for(int p=x;p<=i; p++)
                    {
                        for(int q=y; q<=j;q++)
                        {
                            s+= a[p][q];
                        }
                    }
                    if(s%9 == 0)
                        d++;
                }
            }
        }
    }
    cout<<d;
}
