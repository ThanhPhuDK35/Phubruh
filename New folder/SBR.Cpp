#include<bits/stdc++.h>
using namespace std;
long long n, x[1000001];

void xu_ly_nghiem()
{
    for(int i=1; i<=n; i++)
    {
        cout<<x[i];
    }
    cout<<"\n";
}

void Try(long long i)
{
    for(int t=1; t>=0; t--)
    {
        x[i]=t; 
        if(i == n)
            xu_ly_nghiem();
        else
            Try(i+1);
    }
}

int main()
{
    //freopen("SBR.inp","r",stdin);
    //freopen("SBR.out","w",stdout);
    cin>>n;
    Try(1);
}