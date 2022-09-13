#include<bits/stdc++.h>
using namespace std;
long long n, k, a, b, e, c, s;

long long haha(long long x)
{
    e=0;
    c=0;
    while(x > 0)
    {
        e = x % 10;
        x = x / 10;
        c=c+e*e;
    }
    return c;
}



int main()
{
    cin>>a>>b;
    s=0;
        for(int i=a; i<=b; i++)
    {
        if(haha(i)%2==0)
        s++;
    }
    cout<<s;
}
