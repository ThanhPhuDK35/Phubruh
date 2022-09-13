#include<bits/stdc++.h>
using namespace std;
long long n, a, b, c;

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        long long s=(a*c-b*c)/b;
        if(a*c > s*b+b*c)
            cout<<s+1<<"\n";
        else
            cout<<s<<"\n";
    }
}