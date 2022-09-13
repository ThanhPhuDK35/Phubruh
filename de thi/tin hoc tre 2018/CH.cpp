#include<bits/stdc++.h>
using namespace std;
long long s, m, n, k;

int main()
{
    cin>>m>>n>>k;
    for(int i=m; i<=n; i++)
    {
        if(i%k == 0)
            s++;
    }
    cout<<s;
}
