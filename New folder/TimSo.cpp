#include<bits/stdc++.h>
using namespace std;
long long x[100000001], n;

long long tong(long long a)
{
    long long c=0, b, s=1;
    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b;
        if(b != 0)
            s=s*b;
    }
    return c+s;
}

int main()
{
    //freopen("TimSo.INP","r",stdin);
    //freopen("TimSo.OUT","w",stdout);
    cin>>x[1];
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        x[i] = tong(x[i-1]);
    }
    cout<<x[n];

}
