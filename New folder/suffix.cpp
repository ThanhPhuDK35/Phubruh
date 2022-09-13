#include<bits/stdc++.h>
using namespace std;

int a[1000000];
long long n, s;
int main()
{
   cin>>n;
   s=0;
   for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];

    }
    for(int i = n; i >= 1 ; i--)
    {
        s=s+a[i];
        cout<<s<<endl;
    }
}
