#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int c[100005];
int    n, k;
long long s, x, y;

int main()
{
    cin>>n>>k;
    for(int i = 1; i <= n ; i++)
        cin>>a[i];
    for(int i = 1; i <= n ; i++)
        cin>>b[i];
    for(int i = 1; i <= n ; i++)
        cin>>c[i];
    for(int i = 2; i <= n+1; i++)
    {

        x=0;
       if(c[i-1]+a[i-1] == k) x=k;
       if(a[i-1]+c[i] == k) x=x+k;
       y=0;
       if(c[i-1]+b[i-1] == k) y=k;
       if(b[i-1]+c[i] == k) y=y+k;
       s=s + max(x,y);
    }
    cout<<s;

}
