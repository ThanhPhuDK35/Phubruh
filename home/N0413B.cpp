#include<bits/stdc++.h>
using namespace std;
long long n, a[100001];

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    cout<<(a[n-2]*a[n-2])+(a[n-1]*a[n-1]);
}

