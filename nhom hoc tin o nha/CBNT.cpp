#include<bits/stdc++.h>
using namespace std;
int n, x[101], m, k;

void xu_ly_nghiem()
{
    for(int i=1; i<=k; i++)
    {
        cout<<x[i]<<" ";

    }
    cout<<"\n";
}

void Try(long long i)
{
    for(int t=x[i-1]+1; t<=n; t++)
    {
        x[i]=t;
        if(i == k)
            xu_ly_nghiem();
        else
            Try(i+1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>k>>n;
    x[0]=0;
    Try(1);
}