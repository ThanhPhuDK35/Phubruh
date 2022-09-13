#include<bits/stdc++.h>
using namespace std;
long long n, m, s, a[10000001];

int main()
{
    cin>>n;
    m=0;
    s=0;
    for(long long i=1 ; i <= n; i++)
    {
        cin>>a[i];
        if(a[i] > m)
        {
            m=a[i];
            s=i;
        }

    }
    cout<<s;
}
