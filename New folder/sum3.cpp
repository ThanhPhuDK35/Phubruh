#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n,s;

int main()
{
    cin>>n;
    s=0;
    for(int i = 0; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
   for(int i = n-1; i >= n-3 ; i--) //
    {
      s=s+a[i];
    }
    cout<<s;

}
