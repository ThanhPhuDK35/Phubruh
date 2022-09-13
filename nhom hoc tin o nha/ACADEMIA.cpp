#include <bits/stdc++.h>
using namespace std;
long long n, k, l, a[200001];

bool Kiem_Tra(long long X)
{
    long long Sum=0;
	for(int i = 1 ; i <= X ; i++)
	{
		if(a[i] >= X) continue;
		int Num = X - a[i];
		if(Num > k) return false;
		Sum = Sum + Num;
	}
	if(Sum <= k * l) return true;
	else return false;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	cout.tie(0);
    cin>>n>>k>>l;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a + 1 , a + n + 1 , greater < long long > ()) ;
    int Low = 0 , High = n , Res;
    while(Low <= High)
    {
	    int Mid = (Low + High) / 2;
	    if(Kiem_Tra(Mid) == true) Res = Mid, Low = Mid + 1;
	    else High = Mid - 1;
    }
    cout << Res;

}