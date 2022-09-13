#include<bits/stdc++.h>
using namespace std;
long long x;
bool nt(long long x)
{
    long long s=0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
          return false;
     return true;

}
int main()
{
    freopen("NextPrime.inp","r",stdin);
    freopen("NextPrime.out","w",stdout);
    cin>>x;
    while(x != 0)
    {
    if(nt(x)==true)
    {
        cout<<x;
        break;
    }

    else
       x++;

    }

}
