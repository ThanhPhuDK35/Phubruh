#include<bits/stdc++.h>
using namespace std;
long long a[105][105], m, s, n, mn=1e8, b[1000001], mi=0;

int main()
{
    cin>>m>>n;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];



        for(int i=1; i<=m; i++)
    {
             s=0;
           for(int j=1; j<=n; j++)
            s=s+a[j][i];
        if(s<mn)
        {
            mn=s;
            b[mi]=i;
            if(b[mi]==b[mi--])
            {
                 b[mi]=i;
            mi++;
            }

        }

    }
    cout<<mn<<"\n";
    for(int i=0; i<mi;i++)
    {
        cout<<b[0]<<" ";
    }


}
