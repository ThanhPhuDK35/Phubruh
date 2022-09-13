#include <bits/stdc++.h>
using namespace std;
long long n,a[1000009],b[1000009],c[1000009],e[1000009],d=1;
int main(){
     freopen("PuzzleNum.INP","r",stdin);
     freopen("PuzzleNum.OUT","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
       {
         cin>>a[i];
         b[i] = a[i];
       }
        sort(b+1,b+n+1);
        sort(a+1,a+n+1);
    do
    {  long long s=0;
      for(long long i=1;i<=n;i++)
        s = s*10 + a[i];
        e[d] = s;
        d++;
    } while ( next_permutation(a+1,a+n+1) );
    for(long long i=1;i<=n;i++)
    {
        b[n+1] = a[i];
        for(long long i=1;i<=n+1;i++)
            c[i] = b[i];
        sort(c+1,c+n+2);
        do
        {   long long s=0;
            for(long long i=1;i<=n+1;i++)
                s = s*10 + c[i];
                e[d] = s;
                d++;
        } while( next_permutation(c+1,c+n+2));
    }
    sort(e+1,e+d);
      for(long long i=1;i<=d-1;i++)
         cout<<e[i]<<endl;

}

