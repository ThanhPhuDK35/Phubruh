#include<bits/stdc++.h>
using namespace std;
long long n, m, s;

int main()
{
    freopen("JumpInCircle.inp","r",stdin);
    freopen("JumpInCircle.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        s=s+i;
        if(s>m)
        {
            s=s-(m+1);
        }
    }
    cout<<s;
}
