#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[10000001], c[11000001], s;

int main()
{
cin>>n;
s=0;
for(int i=0; i<n; i++)
{
    cin>>a[i];
    c[s]=a[i];
    s++;
}
for(int i=0; i<n; i++)
  {
    cin>>b[i];
    c[s]=b[i];
    s++;
  }
  sort(c+1, c+1+s);
  for(int i=0; i<s; i++)
{
    cout<<c[i]<<" ";
}

}


