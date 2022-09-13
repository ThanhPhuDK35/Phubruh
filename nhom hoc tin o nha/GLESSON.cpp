#include <bits/stdc++.h>
using namespace std;
long long n, m, c, a[100001];


long long tk(long long k) 
{
	long long dau=1, cuoi=n, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k <  a[mid]) 
        {
            cuoi=mid-1;
		}
        else
        {
            kq=mid;
            dau=mid+1;
        }
	}
	return kq;
}

bool Kiem_Tra(int Mid)
{
    long long Num_Group = 0, s = 1 , e = 1;
    while (s <= n)
    {
        s = tk ( a[s] + Mid );  
        if (s > e + c - 1)
            s = e + c - 1 ;
        s++;
        e = s;
        Num_Group++;
    }
    if (Num_Group <= m) return true;
    return false;
}


int main()
{
    cin>>n>>m>>c;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    int Low = 0 , High = 1000000000 , Kqua;
    while(Low <= High)
    {
	    int Mid = (Low + High) / 2;
	    if(Kiem_Tra(Mid) == true) {Kqua = Mid; High = Mid - 1;}
	    else Low = Mid + 1;
    } 
    cout<<Kqua;
}