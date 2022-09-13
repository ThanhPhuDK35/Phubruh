#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001]={0},t;

long long dequy(long long n)
{
    if (n==1) return 4;
    if (n==2) return 7;
    if (a[n]!=0) return a[n];
    if (n%2!=0) return a[n]=dequy(n/2)*10+4;
    else return a[n]=dequy(n/2-1)*10+7;
}

int main()
{
    freopen("FindN.INP","r",stdin);
    freopen("FindN.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<dequy(n)<<'\n';
    }
}