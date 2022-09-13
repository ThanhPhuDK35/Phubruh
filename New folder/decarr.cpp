#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n;

int main()
{
    cin>>n;
    for(int i = 0; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i = n; i<=n-2 ; i--)
      {
        cout<<a[i]<<" ";
      }
}
