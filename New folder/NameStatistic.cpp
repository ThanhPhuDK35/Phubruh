#include<bits/stdc++.h>
using namespace std;
long long a, n;
string b;
map<string , long long > mp;
int main()
{
    freopen("NameStatistic.inp","r",stdin);
    freopen("NameStatistic.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a==1)
             mp[b]++;
        else
            cout<<mp[b]<<'\n';

    }


}

