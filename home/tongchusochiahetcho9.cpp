#include<bits/stdc++.h>
using namespace std;
long long n, a[100007];
int tcs(long long a)
{

int s=0;
 while (a>0)
 {
s=s+a%10;
a=a/10;
 }
return s;
 }
 int main()
 {
int kq=0;
cin>>n;
for (int i=1; i<=n;i++)
{
cin>>a[i];
}


   for (int i=1;i<n;i++)

for (int j=i+1;j<=n; j++)
{
if ((tcs(a[i])+tcs(a[j]))%9==0)
{
kq++;
}
}
cout<<kq;
   }

