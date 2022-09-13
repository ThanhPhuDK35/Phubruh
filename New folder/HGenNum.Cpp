#include<bits/stdc++.h>
using namespace std;
long long a[1000000], b[10000001], s, n, x;

int main()
{
    freopen("HGenNum.Inp","r",stdin);
    freopen("HGenNum.Out","w",stdout);
    cin>>n;
    for(int i=1; i<= n; i++)
    {
            cin>>a[i];
    }
    s = 1;
    b[1] = a[1];
    int tp;
    for(int i = 2; i <= n; i++)
        {
            x = a[i];
            tp = s;
            for(int j = 1; j <= tp; j++)
            {
                s++;
                b[s] = b[j]+x;
            }
            s++;
            b[s]=x;
        }
    sort(b+1, b+1+s);
        cout<<b[1]<<" ";
    for(int i=2; i<=s; i++)
    {
        if(b[i] != b[i-1])
           cout<<b[i]<<" ";
    }



}
