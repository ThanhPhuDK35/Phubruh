#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i%2 == 1)
        {
            if(a[i] < 0) s++;
        }
    }
    cout<<s;
}
