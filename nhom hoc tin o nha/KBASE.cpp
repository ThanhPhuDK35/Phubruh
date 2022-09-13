#include<bits/stdc++.h>
using namespace std;
long long n, x[1000001], m, dem=0;

void xu_ly_nghiem()
{
    if(x[1] == 0) 
    {
        cout<<"";
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            cout<<x[i];
        }
        cout<<"\n";
    }
}

void Try(long long i)
{
    for(int t=0; t<m; t++)
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
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m>>n;
    if(n==1)
    {
        cout<<"0"<<"\n";
    }
    Try(1);
}