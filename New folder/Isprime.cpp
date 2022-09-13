#include<bits/stdc++.h>
using namespace std;
long long n;

bool nt(long long x)
{
    long long s=0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
          return false;
     return x>1;

}



int main()
{
    freopen("IsPrime.Inp","r",stdin);
    freopen("IsPrime.Out","w",stdout);
    cin>>n;
    if(nt(n)==true)
       cout<<"1";
    else
        cout<<"0";

}
