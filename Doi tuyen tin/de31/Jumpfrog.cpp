#include <bits/stdc++.h>
using namespace std;
long long n, Low = 1, k, x[1000001];

bool Jump_To_n(long long Mid)
{
	long long Pos = 1 , Step = 0, Limit, L, M, H, nextPos;
	while(Pos < n)
	{
		Limit = x[Pos] + Mid;
		L = Pos , H = n , nextPos = Pos;
		while(L <= H)
		{
			M = (L + H) / 2;
			if(x[M] <= Limit)
            {
                nextPos = M;
                L = M + 1;
            }
			else H = M - 1;
		}
		if(nextPos == Pos) return false;
		Pos = nextPos;
		Step++;
	}
	if(Step <= k) return true;
	else return false;
}

int main()
{
    freopen("Jumpfrog.Inp", "r", stdin);
    freopen("Jumpfrog.Out", "w", stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>x[i];
    long long High = x[n] , Ans = x[n];
    while(Low <= High)
    {
	    int Mid = (Low + High) / 2;
        if(Jump_To_n(Mid) == true)
        {
            Ans = Mid;
            High = Mid - 1;
        }
        else Low = Mid + 1;
    }
    cout << Ans;
}

