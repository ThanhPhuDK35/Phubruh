#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, k;

ll Count_Number(ll Mid)
{
    long long j, count =0;
	for(int i=1; i<=n; i++)
	{
		j = Mid / i;
		if(j <= m) count += j;
		
        else count += m;
	}
    return count;
}


int main()
{
    cin>>n>>m>>k;
    ll Low = 1 , High = m*n, Kqua=0;
    while(Low <= High)
    {
	    ll Mid = (Low + High) / 2;
	    ll Count = Count_Number(Mid);
	    if(Count >= k) 
	    {
		    Kqua = Mid;
		    High = Mid - 1;
	    }
	    else
	    {
		    Low = Mid + 1;
	    }
    }
    cout << Kqua;
}