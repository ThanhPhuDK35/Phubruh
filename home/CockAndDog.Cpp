#include<bits/stdc++.h>
using namespace std;
long long x, y, n;

int main()
{
    freopen("CockAndDog.inp","r",stdin);
    freopen("CockAndDog.out","w",stdout);
    cin>>x>>y;
    n=((x*4)-y)/2;
    cout<<n<<"\n";
    cout<<x-n<<"\n";

}
