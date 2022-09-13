#include<bits/stdc++.h>
using namespace std;
long long n;
pair<long long, long long> a[10000001];
map<long long, long long>s;

int main()
{
    //freopen("PHOTO.inp","r",stdin);
    //freopen("PHOTO.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
        s[a[i].second]++;
    }
    long long e=1, e1=n;
    if(a[e].second != a[e1].second)
    {
        for(int i=1; i<=1e6; i++)
        {
            if(s[a[e].second] > 1)
            {
                s[a[e].second]--;
                e++;
            }
            if(s[a[e1].second] > 1)
            {
                s[a[e1].second]--;
                e1--;
            }
            if(s[a[e].second] == 1 && s[a[e1].second] == 1) break;
        }
        cout<<a[e1].first - a[e].first;
    }
    else
    {
        long long m=1e6;
        while(a[e].second == a[e+1].second)
        {
            s[a[e].second]--;
            e++;
        }
        while(a[e1].second == a[e1-1].second)
        {
            s[a[e1].second]--;
            e1--;
        }
        long long l=e+1, r=e1-1;
        for(int i=1; i<=1e6; i++)
        {
            if(s[a[e].second] > 1)
            {
                s[a[e].second]--;
                e++;
            }
            if(s[a[e1].second] > 1)
            {
                s[a[e1].second]--;
                e1--;
            }
            if(s[a[e].second] == 1 && s[a[e1].second] == 1) break;
        }
        if()
    }
}