#include<bits/stdc++.h>
using namespace std;
string s, t, a[10000001];
long long dem;

int main()
{
    freopen("SubDis.inp","r",stdin);
    freopen("SubDis.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    dem=0;
    for(int i=0; i<s.size(); i++)
    {
        t="";
        for(int j=i; j<s.size(); j++)
        {
            if(s[j] != ' ')
            {
                dem++;
                t=t+s[j];
                a[dem]=t;
            }
        }
    }
    sort(a+1, a+1+dem);
    long long ans=0;
    for(int i=1; i<=dem; i++)
    {
        if(a[i] != a[i-1])
            ans++;
    }
    cout<<ans;
}
