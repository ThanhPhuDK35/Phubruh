#include<bits/stdc++.h>
using namespace std;
long long n, s=1;
string a[100001];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin<<a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<endl;
    }
}
