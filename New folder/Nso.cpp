#include<bits/stdc++.h>
using namespace std;
int n, i, x, s;

int main()
{
    cin>>n;
    s=0;
    for(i=1; i <= n; i++)
    {
        cin>>x;
        s=s+x;
    }
    cout<<s;

}
