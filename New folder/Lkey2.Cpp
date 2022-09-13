#include<bits/stdc++.h>
using namespace std;
string a, n;
long long s, b[10001], ans;

int main()
{
    freopen("LKey2.inp","r",stdin);
    freopen("LKey2.out","w",stdout);
    cin>>n>>a;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<n.size(); j++)
        {
            if(n[j] == a[i])
            {
                b[i]=j+1;
                break;
            }
        }
    }
    ans=0;
    for(int i=1; i<a.size(); i++)
    {
        ans += abs(b[i-1] - b[i]);
    }
    cout<<ans;
}