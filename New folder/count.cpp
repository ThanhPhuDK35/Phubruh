#include<bits/stdc++.h>
using namespace std;

int a[1000000];
long long n, y, x, s;
int main()
{
   cin>>n;
   s=0;
   for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];

    }
    cin>>x>>y;
    for(int i = 1; i <= n ; i++)
    {


      if(a[i] >= x && a[i] <= y)
       {
         s=s+1;
       }
    }
    cout<<s;
}
