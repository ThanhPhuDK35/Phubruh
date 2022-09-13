#include<bits/stdc++.h>
using namespace std;

int a[1000000];
long long n, k;

int main()
{
    cin>>n;
    k=1;
    for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+n+1);

    for(int i = 2; i <= n ; i++)
      {
            if(a[i] != a[i-1])

                k++;
      }
      cout<<k<<endl;
      cout<<a[1]<<' ';
   for(int i = 2; i <= n ; i++)
      {
            if(a[i] != a[i-1])
                cout<<a[i]<<" ";

      }






}
