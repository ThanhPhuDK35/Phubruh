#include<bits/stdc++.h>
using namespace std;

int a[1000000];
long long n, k;

int main()
{
    cin>>n;
    for(int i = 1; i <= n ; i++)
    {
        cin>>k;
         for(int x = 1; x <= k ; x++)
         {
             cin>>a[x];
         }
        //----kiem tra day a[1], a[2], .. , a[k] co doi xung khong?
        int m = 1;
        for(int y = 1; y <= k ; y++)
            if(a[y] != a[k - y + 1])
            {
              m = 0;
              break;
           }
        cout<<m<<endl;
    }
}
