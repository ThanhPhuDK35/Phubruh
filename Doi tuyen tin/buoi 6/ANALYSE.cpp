#include<bits/stdc++.h>
using namespace std;
long long n, s, a[1000001], x, j, m, dem;

bool nt(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

int main ()
{
	freopen("analyse.inp","r",stdin);
	freopen("analyse.out","w",stdout);
    while(cin>>n)
    {
        x=2;
        memset(a , 0 , sizeof(a));
	    for(int i=2;i<=n;i++)
        {
		    j=2;
            m=i;
		    while(m>1)
            {
			    dem=0;
			    while(m%j==0)
			    {
				    m=m/j;
				    dem++;
			    }
			    a[j]=a[j]+dem;
			    j++;
		    }
		    x=max(x,j-1);
	     }
	     for(int i=2;i<=x;i++)
         {
	        if(nt(i) == true)
             cout<<a[i]<<" ";
         }
         cout<<"\n";
    }
}
