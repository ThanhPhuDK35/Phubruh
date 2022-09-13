#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], y, s;

bool nto(long long x)
{
    if(x<2) return false;
    if(x<=3) return true;
    if(x%2 == 0) return false;
    for(int i=3; i<= sqrt(x); i+=2)
        if(x%i == 0)
        return false;
    return true;
}

bool mersen(long long x)
{
    y=x+1;
    s=0;
    while(y>1)
    {
        if(y%2 == 1)
        {
            return false;
            break;
        }
        y=y/2;
        s++;
    }
    if(nto(s) == true)
        return true;
    else
        return false;
}

int main()
{
    freopen("MERSEN.inp","r",stdin);
    freopen("MERSEN.out","w",stdout);
    cin>>n;
    for(int i=3; i<=n; i++)
    {
        if(mersen(i) == true)
            cout<<i<<" ";
    }
}
