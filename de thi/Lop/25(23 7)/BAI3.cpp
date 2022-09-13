#include<bits/stdc++.h>
using namespace std;
long long p, k, a[10001], j;
string s, n;

int main()
{
    //freopen("BAI3.inp","r",stdin);
    //freopen("BAI3.out","w",stdout);
    cin>>p>>k;
    for(int i=1; i<=p;i ++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=p; i++)
    {
        cin>>s;
        for(int j=1; j<=a[i]; j++)
        {
            n=n+s;
        }
    }
    while(j < k)
    for(int i=0; i<n.size(); i++)
    {
        if(n[i]-48 < n[i-1]-48)
        {
            n.erase(i-1,1);
            j++;
            break;
        }
        if(i == n.size()-1)
        {
            j++;
            n.erase(i,1);
        }
    }
    while(n[0] == '0')
        n.erase(0, 1);
    cout<<n;
}
