#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], kq;
map<long long, long long> s;

int main()
{
    freopen("CHIADEU.inp","r",stdin);
    freopen("CHIADEU.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    sort(a+1, a+1+n);
    kq=0;
    for(int i=2; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j != i)
            {
                if(s[a[i]*2 - a[j]] >= 1)
                {
                    kq++;
                }
            }
        }
    }
    cout<<kq;
}