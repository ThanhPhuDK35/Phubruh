#include<bits/stdc++.h>
using namespace std;
long long n, s, b[1000005], a[1000005], c[1000005], k=0, p;

int main()
{
    freopen("Modulo.INP", "r", stdin);
    freopen("Modulo.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        b[i]=a[i]-a[1];
    }
    s=b[1];
    for(int i=1;i<=n;i++)
    {
        s=__gcd(b[i],s);
    }
    for(int i=1;i<=sqrt(s);i++)
    {
        if(s%i==0)
        {
            k++;
            c[k]=i;
            p=sqrt(s);
            if(p*p!=s)
            {
                k++;
                c[k]=s/i;
            }
        }
    }
    sort(c+1,c+k+1);
    for(int i=1;i<=k;i++) cout<<c[i]<<" ";
}
