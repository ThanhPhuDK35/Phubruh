#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], s, m;

int main()
{
    freopen("ANHHOA.inp","r",stdin);
    freopen("ANHHOA.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=1;
    m=0;
    a[0]=0; a[n+1]=0;
    for(int i=2; i<=n; i++)
    {
        s++;
        if(a[i] == a[i-1] && a[i] == a[i+1])
        {
            if(m < s)
               m=s;
            s=1;
        }
        if(m < s)
            m=s;
    }
    cout<<m;
}

