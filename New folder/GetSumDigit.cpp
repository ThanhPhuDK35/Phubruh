#include<bits/stdc++.h>
using namespace std;
long long n, s, b;

long long sum(long long x)
{
    s=0;
     while(x>0)
     {
         b=x%10;
         x=x/10;
         s=s+b;
     }
     return s;

}



int main()
{
    freopen("GetSumDigit.Inp","r",stdin);
    freopen("GetSumDigit.Out","w",stdout);
    cin>>n;
    cout<<sum(n);

}

