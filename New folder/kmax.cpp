#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n, k;

int main()
{
    cin>>n>>k;
    for(int i = 0; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
   for(int i = n-1; i >= n-k ; i--) //
    {
      cout<<a[i]<<endl;
    }

}
