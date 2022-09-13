#include<bits/stdc++.h>
using namespace std;
long long n, a[10001], b[1001], c[1001]; 
bool kt=false;

bool nt(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

void xuat()
{
    long long  ghep=0;
    for(int i=1;i<=n;i++) ghep=ghep*10+b[i];
    if(nt(ghep) == true)
    {
        kt=true;
        cout<<ghep<<endl;
    }
}
void hv(long long i)
{
    for(int j=1;j<=n;j++)
    {
        if(c[j]==0)
        {
            b[i]=a[j];c[j]=1;
            if(i==n) xuat();
            else hv(i+1);
            c[j]=0;
        }
    }
}

int main()
{
    freopen("ghepso.inp","r",stdin);
    freopen("ghepso.out","w",stdout);
    memset(c,0,sizeof(c));
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    hv(1);
    if(kt==false) cout<<0-1;
}
