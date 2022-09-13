#include <bits/stdc++.h>
using namespace std;
long long n, m, a[1000001], k, s, t, i, j, x, y;

void qs(long long a[10000001], long long left, long long right)
{
    i=left; j=right;
    x= a[(left+right)/2];
    do
    {
        while(a[i]<x && i<right) i++;
        while(a[j]>x && j>left) j--;
        if(i<=j)
        {
            y=a[i];a[i]=a[j];a[j]=y;
            i++;j--;
        }
    }
    while (i<=j);
    if (left<j) qs(a,left,j);
    if (i<right) qs(a,i,right);
}

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
	{
		scanf("%ld",&a[i]);
		t+=a[i];
	}
	qs(a,1,n);
	a[0]=0;
	t=n+1;
	for(i=1;i<=n;i++)
	{
		s+=(a[i]-a[i-1])*(t-i);
		if(t-s<m) break;
	}
	s-=(a[i]-a[i-1])*(t-i);
	long K=(t-s-m)/(t-i);
	printf("%ld",a[i-1]+K);

}