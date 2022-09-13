#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], chan, le;

int main()
{
    freopen("DEMCAP.inp","r", stdin);
    freopen("DEMCAP.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]%2 == 0) 
            chan++;
        else
            le++;
    }
    cout<<(chan * (chan-1))/2 + (le*(le-1))/2;


}