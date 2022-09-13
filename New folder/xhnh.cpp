#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    cin>>n;
    s=n;
    for(int i = n; i <= 1; i--)
    {
        s=s*i;
    }
    cout<<s;
}
