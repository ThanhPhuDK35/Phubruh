#include<bits/stdc++.h>
using namespace std;
long long a, n, s;

int main()
{
    cin>>a>>n;
    s=a;
    for(int i=0; i<n-1; i++)
    {
        a=a*s;
        a=a%1000000007;
    }
    cout<<a;
}
