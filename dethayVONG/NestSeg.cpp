#include<bits/stdc++.h>
using namespace std;
int n,i,dp[200002],b[200002],j;
pair<int,int> a[200002];
int main()
{
	freopen("NestSeg.inp","r",stdin);
	freopen("NestSeg.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].first>>a[i].second;
		a[i].second = -a[i].second;
	}
	sort(a+1,a+1+n);
	for(i=1;i<=n;i++)
	{
		a[i].second = -a[i].second;
		b[i]=a[i].second;
	}
	dp[n]=1;
	for(i=2;i<=n;i++)
	{
		dp[i]=1;
		for(j=1;j<i;j++)
		{
			if(b[j]>b[i] && dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
			}
		}
	}
	int m = *max_element(dp+1,dp+1+n);
	cout<<m<<endl;
}
