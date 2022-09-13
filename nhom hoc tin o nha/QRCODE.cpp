#include<bits/stdc++.h>
using namespace std;
long long n, x[1000001], m;

void xu_ly_nghiem()
{
    long long dem=0, trang=0, den=0;
    for(int i=1; i<=n; i++)
    {
        if(x[i]==1) den++;
        else trang++;
        if(x[i] == 0)
            dem++;
        else dem=0;
        if(dem == 2)
            return;
    }
    if(trang != den) return ;
    for(int i=1; i<=n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<"\n";
}

void Try(long long i)
{
    for(int t=0; t<=1; t++)
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
    cin>>n;
    Try(1);
}