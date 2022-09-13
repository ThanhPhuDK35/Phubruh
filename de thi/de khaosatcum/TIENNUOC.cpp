#include<bits/stdc++.h>
using namespace std;
long long s, n;

int main()
{
    freopen("TIENNUOC.inp","r",stdin);
    freopen("TIENNUOC.out","w",stdout);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        if(i <= 5)
        {
            s=s+6000;
        }
        else
        {
            if(i <= 15)
            {
                s=s+8000;
            }
            else
                s=s+10000;
        }
    }
    cout<<s;
}

