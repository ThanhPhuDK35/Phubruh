#include<bits/stdc++.h>
using namespace std;
long long t, a, b;

bool nt(long long x)
{
    if(x < 2) return false;
    if(x <= 3) return true;
    if(x % 2 == 0) return false;
    for(int i=3; i<=sqrt(x); i+=2)
        if(x%i==0) return false;
    return true;
}

int main()
{
    freopen("NT.inp","r",stdin);
    freopen("NT.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(nt(b*b-a*a) == true)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
}
