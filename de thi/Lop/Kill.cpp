#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, e;

int main()
{
    freopen("Kill.inp","r",stdin);
    freopen("Kill.out","w",stdout);
    cin>>a>>b>>c;
    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c; j++)
        {
            if(a*i+b*j == c || a*j+b*i == c)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
}