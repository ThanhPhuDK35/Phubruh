#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100000001], s, x, y;

int main()
{
    freopen("MaxPow.inp","r",stdin);
    freopen("MaxPow.out","w",stdout);
    cin>>n>>x;
    y=x;
    s=1;
    for(int i=1; i<= n; i++)
    {
        if(n%x==0)
        {
            a[s]=i;
            s++;
        }
        x=x*y;
        if(x>n)
        {
            break;
        }
    }
    cout<<a[s-1];
}
