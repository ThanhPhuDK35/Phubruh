#include <bits/stdc++.h>
using namespace std;
long long x, c[10000001], res, n, a, b, s;

void phantich(long long x)
{
    long long i=2;
    while(i*i<=x)
    {
        while(x%i == 0)
        {
            c[i]++;
            x=x/i;
        }
        i++;
    }
    if(x>1)
        if(x<100001)
           c[x]++;
        else
            res=res*2;
}

int main()
{
	freopen("uocso.inp","r",stdin);
	freopen("uocso.out","w",stdout);
	ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    cin>>n;
    while(n--)
    {
        memset(c , 0 , sizeof(c));
        cin>>a>>b;
        res=1; s=1;
        phantich(a);
        phantich(b);
        for(int i=2; i<=100001; i++)
        {
            if(c[i]>0)
            {
                res=res*(c[i] + 1);
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
