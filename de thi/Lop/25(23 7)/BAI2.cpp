#include<bits/stdc++.h>
using namespace std;
long long k, t, s;

int main()
{
    freopen("BAI2.inp","r",stdin);
    freopen("BAI2.out","w",stdout);
    cin>>k>>t;
    s=0;
    for(int i=1; i<=t;i++)
    {
        s++;
        if(s>k)
        {
            s=0;
        }
    }
    cout<<s;
}
