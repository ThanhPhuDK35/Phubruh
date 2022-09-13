#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], k;
int Tim(int x)
{
    int t=1;
     while(t*(t+1) < 2*x) t++;
     if(t*(t+1)/2 == x+1) t++;
     return t;
}

int main()
{
    freopen("JumpX.Inp","r",stdin);
    freopen("JumpX.Out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<Tim(a[i])<<"\n";
    }
}
