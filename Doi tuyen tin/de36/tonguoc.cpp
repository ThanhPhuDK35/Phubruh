#include<bits/stdc++.h>
using namespace std;
long long x, s;

int main()
{
    freopen("tonguoc.inp","r",stdin);
    freopen("tonguoc.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x;
    s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
                s=s+x/i;
        }
    }
    cout<<s;
}