#include<bits/stdc++.h>
using namespace std;
long long n, nn, a[100001], x;

int main()
{
    freopen("TGDSEQ.inp","r",stdin);
    freopen("TGDSEQ.out","w",stdout);
    cin>>nn;
    n=0;
    for(int i=1; i<= nn; i++)
    {
        cin>>x;
        if(x>0)
        {
            n++;
            a[n]=x;
        }
    }
    sort(a+1, a+1+n);
    long long s=0, d=1;
    for(int i=2; i<=n; i++)
    {
        if(a[i]==a[i-1])
            d++;
        else
        {
            s = s + d*(d-1)*(d-2)/6;
            d = 1;
        }
    }
    s=s+d*(d-1)*(d-2)/6;
    cout<<s;
}
