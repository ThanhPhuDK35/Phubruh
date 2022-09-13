#include<bits/stdc++.h>
using namespace std;
long long a[10000004], n, d=0, ln= -1e18, b=0;

int main()
{
    freopen("QUEN.inp","r",stdin);
    freopen("QUEN.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    d = n - 1;
    for(int i=1 ; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n ; i++)
    {
        for(int j=i+2 ; j<= n; j++)
        {
            if(b == 0)
            {
                ln=a[j-1];
                b = 1;
            }
            if(a[i] >= ln && a[j] >= ln)
            {
                d++;
                if(a[j] > ln)
                {
                    ln=a[j];
                }
            }
            else continue;
        }
        b=0;
        ln = -1e18;
    }
    cout<<d;
}
