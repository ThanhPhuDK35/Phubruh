#include<bits/stdc++.h>
using namespace std;
long long n, m, s;
pair<long long , long long> a[1000001];

int main()
{
    freopen("MakeTeam.inp","r",stdin);
    freopen("MakeTeam.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    m=0;
    for(int i = 0; i < n; i++)
    {
        s = 0;
        for(int j = 0; j<n; j++)
        {
            if(a[i].first == a[j].first && a[i].first>=8 && a[j].second >= 5 )
                s++;
        }
        if(m < s)
            m = s;
    }
    cout<<m;

}
