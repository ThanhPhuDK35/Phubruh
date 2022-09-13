#include<bits/stdc++.h>
using namespace std;
string y;
long long n, m, a[10000001];
int main()
{
    cin>>y;
    n=y.size();
    m=0;
    for(int i=0; i<=n; i++)
    {
        a[i]=y[i];
        if(a[i]>m)
            m=a[i];
    }
    cout<<m;

}


