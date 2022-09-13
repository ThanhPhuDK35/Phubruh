#include<bits/stdc++.h>
using namespace std;
long long n, a[100007], s, e;

long long uoc(long long x)
{
    s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s++;
            if(x/i != i)
                s++;
        }
    }
    return s;
}


int main()
{
    cin>>n;
    e=0;
    for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((uoc(a[i])+uoc(a[j]))%7==0)
               e++;
        }
    }
    cout<<e;
}
