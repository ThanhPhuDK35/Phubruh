#include<bits/stdc++.h>
using namespace std;
long long t, n;

int main()
{
    freopen("CHESS.inp","r",stdin);
    freopen("CHESS.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4 == 1 || n%4 == 3)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }

}