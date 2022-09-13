#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    freopen("JumpInLine.inp","r",stdin);
    freopen("JumpInLine.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        s=s+i;
    }
    cout<<s;
}
