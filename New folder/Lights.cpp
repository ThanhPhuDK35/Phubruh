#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10001][10001], tat, bat, s, d, k;

int main()
{
    freopen("Lights.inp","r",stdin);
    freopen("Lights.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 0)
               tat++;
            else bat++;
        }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            if (a[i-1][j-1] == a[i-1][j] && a[i][j-1] != a[i][j]) 
                {cout << "No solution"; return 0;}
            else if (a[i-1][j-1] != a[i-1][j] && a[i][j-1] == a[i][j]) 
                {cout << "No solution"; return 0;}
        }
    }
    if(tat > bat) s=1;
    else s=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i][1] == s)
           d++;
    }
    for(int i=1; i<=m; i++)
    {
        if(a[1][i] == s)
           d++;
    }
    cout<<d;
}