#include<bits/stdc++.h>
using namespace std;
long long a, b;

long long uoc(long long x)
{
    long long s=0;
    for(int i=1; i<x; i++)
    {
        if(x%i==0)
            s=s+i;
    }
    return s;
}


int main()
{
    cin>>a>>b;
    if(uoc(a)==b || uoc(b)==a)
        cout<<"YES";
    else
        cout<<"NO";
}
