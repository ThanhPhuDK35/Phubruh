#include<bits/stdc++.h>
using namespace std;
long long n, a[100000000001];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    sort(a+1, a+1+n);
    if(s>=0)
        cout<<n;
    else
    {

    }
}
