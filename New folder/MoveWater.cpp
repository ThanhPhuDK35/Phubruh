#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

bool kiemtra(int i)
{
    if(i==1)
        return true;
    if(s%i>0) return false;
    int x=s/i, e=0;
    for(int i=1; i<=n; i++)
    {
        e=e+a[i];
        if(e==x) e=0;
        else
        {
            if(e>x) return false;
        }
        return true;
    }
}


int main()
{
    //freopen("MoveWater.Inp","r",stdin);
    //freopen("MoveWater.Out","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        for(int i=n; i>=1; i--)
        {
            if(kiemtra(i)==true)
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
}
