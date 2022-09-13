#include<bits/stdc++.h>
using namespace std;
long long n, m, t;

struct so
{
    long long f, s;
};

bool sx(so c, so d)
{
    if(c.s > d.s) return true;
    else return false;
}

so b[1000001];

int main()
{
    freopen("BAI3.inp","r",stdin);
    freopen("BAI3.out","w",stdout);
    cin>>m>>n;
    t=m+n;
    cout<<t<<"\n";
    while(t > 0)
    {
        b[t%10].s++;
        t=t/10;
    }
    for(int i=0; i<=9; i++)
    {
        b[i].f = i;
    }
    sort(b, b+1+9, sx);
    for(int i=0; i<=9; i++)
    {
        cout<<b[i].f<<" "<<b[i].s;
        if(b[i+1].s != 0)
        {
            cout<<"\n";
        }
        else
        {
            return 0;
        }
    }
}