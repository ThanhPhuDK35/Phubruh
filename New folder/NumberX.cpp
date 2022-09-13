#include<bits/stdc++.h>
using namespace std;
long long a, b, x;

int main()
{
    freopen("NumberX.inp","r",stdin);
    freopen("NumberX.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    long long s = (a*b)/__gcd(a,b);
    x = s/a-1;
    if(a == b)
       cout<<a;
    else
    {
       if(a%b == 0 || b%a == 0)
          cout<<abs(a-b);
       else
          cout<<a*x-b;
    }

}
