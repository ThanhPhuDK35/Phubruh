#include<bits/stdc++.h>
using namespace std;
long long n, p, s, w[1000001];

int main()
{
    freopen("Ferriswheel.inp","r",stdin);
    freopen("Ferriswheel.out","w",stdout);
    cin>>n>>p;
    for(int i=1; i<=n; i++)
    {
        cin>>w[i];
    }
    sort(w+1, w+1+n);
    s=0;
    int i, j;
    i=1; j=n;
    while(i<=j)
    {
        if(w[i]+w[j] <= p)
        {
            s++;
            i++;
            j--;
        }
        else
        {
            j--;
            s++;
        }
    }
    cout<<s;
}
