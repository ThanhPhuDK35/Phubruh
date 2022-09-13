#include<bits/stdc++.h>
using namespace std;
long long a[10000001], b[10000001], n, l, r, e, s;


int main()
{
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    b[0]=0;
    cin>>n>>l>>r;
    s=0;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
        if(abs(a[i]) <= r && abs(a[i]) >= l)
            s++;
        b[i]=b[i-1]+a[i];
    }

    for(int i=1; i<= n; i++)
    {
        for(int j=i+1; j<=n ; j++)
        {
            e=abs(b[j]-b[i-1]);
            if(e <= r && e >= l)
            {
                s++;
            }

        }

    }
    cout<<s;
}


