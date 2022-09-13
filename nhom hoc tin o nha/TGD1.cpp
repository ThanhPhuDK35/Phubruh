#include<bits/stdc++.h>
using namespace std;
long long n, a[20000001], s, m, l, r;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    a[0]=0;
    for(int i=1; i<=n-2; i++)
    {
        l=0; r=0;
        for(int j=i-1; j>=0; j--)
        {
            if(a[j]==a[i])
             l++;
        }
        for(int j=i+1;j<=n; j++)
        {
            if(a[i]==a[j])
            r++;
        }
        s=s+(l*r);
    }
    cout<<s;
}
