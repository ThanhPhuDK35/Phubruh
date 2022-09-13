#include<bits/stdc++.h>
using namespace std;
long long t,i,n,a,b,j[10001];

int main()
{
    freopen("SumContinue.inp","r",stdin);
    freopen("SumContinue.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    for (i = 1;i <= t;i++)
    {
        j[i]=0;
        cin>>a>>b;
        n=(a+1)*a/2;
        if (n == b) 
            {j[i]=1;continue;}
        if ((n-b)%2 == 0 && (n-b)/2 <= a && (n-b)/2 != 1)
            j[i]=-(n-b)/2;
    }
    for (i = 1;i <= t;i++)
        cout<<j[i]<<'\n';
}
