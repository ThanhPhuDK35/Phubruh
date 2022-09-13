#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n, a[10000001], d[10000001];
bool nt[1000001];
void eratos(int n)
{
    memset(nt, true, sizeof nt);
    nt[0]=nt[1]=false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(nt[i])
        {
            int t=i;
            while(t*i <= n)
            {
                nt[i*t]==false; t++;
            } 
        }
    }
}

int main()
{
    freopen("Bsquare.inp","r",stdin);
    freopen("Bsquare.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++) a[i]=i;
    int m=sqrt(n);
    eratos(m);
    for(int e=2; e<=m; e++)
    {
        if(nt[e])
        {
            int x=e*e;
            int t=1;
            while(x*t <=n)
            {
                while(a[x*t]%x == 0)  a[x*t]=a[x*t]/x;
                t++;
            }
        }
    }
    for(int i=1; i<=n; i++)
       d[a[i]]++;
    long long s=0;
    for(int i=1; i<=n; i++)
       s+=1LL*d[i]*(d[i]-1)/2;
    cout<<s;
}