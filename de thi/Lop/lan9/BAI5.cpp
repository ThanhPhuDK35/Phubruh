#include<bits/stdc++.h>
using namespace std;
long long n, x[100000001], y, dem, a[10000001], b[10000001];

int main()
{
    //freopen("BAI5.inp","r",stdin);
    //freopen("BAI5.out","w",stdout);
    while(cin>>y)
    {
        long long tong=0, s=1;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        n=0;
        while(y > 0)
        {
            a[s] = y%10;
            y=y/10;
            s++;
            n++;
        }
        long long e;
        for(int i=n; i>=1; i--)
        {
            e=0;
            for(int j=i; j>=1; j--)
            {
                e=e*10 + a[j];
                b[e]++;
                if(b[e] == 1)
                    tong=tong+e;
            }
        }
        cout<<tong<<"\n";
    }
}