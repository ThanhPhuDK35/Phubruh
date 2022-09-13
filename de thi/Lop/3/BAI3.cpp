#include<bits/stdc++.h>
using namespace std;
long long n, r, a[100000001], s;

int main()
{
    cin>>n>>r;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=n; i>0; i--)
    {
        for(int j=i-1; j>0; j--)
        {
            if(a[i]-a[j]>r)
                s++;
        }
    }
    cout<<s;
}
