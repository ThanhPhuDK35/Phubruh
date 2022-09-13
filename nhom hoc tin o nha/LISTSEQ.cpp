#include<bits/stdc++.h>
using namespace std;
long long n, x[101], m, dem=0;
string k, c[1000001];

void xu_ly_nghiem()
{
    string s="";
    for(int i=1; i<=n; i++)
    {
        
        if(x[i] == 1)
        s=s+k[i-1];

    }
    dem++;
    c[dem]=s;
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
    cin.tie(0); 
    cout.tie(0);
    cin>>k;
    n=k.size();
    Try(1);
    sort(c+1, c+1+dem);
    for(int i=1; i<=dem; i++)
    {
        if(c[i] != c[i-1])
        cout<<c[i]<<"\n";
    }
}