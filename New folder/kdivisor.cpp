#include<bits/stdc++.h>
using namespace std;
long long a[100005], n, k, s;

int main()
{
    cin>>n>>k;
    s=0;

         for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int x = 0; x < n; x++)
        {
             for(int i = x+1; i < n; i++)
          {
            if((a[x]+a[i])%k==0)
            {
                s=s+1;
            }
          }
        }
        cout<<s;
}
