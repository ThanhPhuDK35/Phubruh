#include<bits/stdc++.h>
using namespace std;
long long n;
pair<long long , long long> a[100001];

int main()
{
    freopen("SortList.Inp","r",stdin);
    freopen("SortList.Out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }
}
