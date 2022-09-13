#include<bits/stdc++.h>
using namespace std;
long long n, a, s;

bool gd(long long x)
{
    while(x>0)
    {
        a=x%10;
        x=x/10;
        if(a == x%10)
           return false;
    }
    return true;
}

int main()
{
    freopen("Count1.inp","r",stdin);
    freopen("Count1.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(gd(i) == true)
            s++;
    }
    cout<<s;
}