#include <bits/stdc++.h>
using namespace std;
long long n,dem=0;
bool NT[10000001];

void sang()
{
    memset(NT,true,sizeof(NT));
    NT[0]=false;NT[1]=false;
    for (long long i=2;i*i<=10000000;i++)
        if(NT[i])
        {
            for(long long j=i+i;j<=10000000;j+=i)
                NT[j]=false;
        }
}

int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sang();
    cin>>n;
    for(int i=3;i<=n;i=i+2)
    {
        if(i+2<=n)
           if(NT[i]==true && NT[i+2]==true)
               dem++;
    }
    cout<<dem;
}
