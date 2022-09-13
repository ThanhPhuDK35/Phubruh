#include <bits/stdc++.h>
using namespace std;
long long n, k, a[100001], s[1000001];

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++) 
    {
        cin>>a[i];
    }
    s[0]=0;
    for(int i=1; i<=n; i++)
    {
        s[i]=s[i-1]+a[i];
    }
    long long Kqua = 0, Mid, High, Low, Value;
    for(int i = 1 ; i <= n ; i++)
    {
	    Value = 0 , Low = 1 , High = i;
	    while(Low <= High)
	    {
		    Mid = (Low + High) / 2;
		    if(s[Mid - 1] < s[i] - k) {Value = Mid; Low = Mid + 1;}
		    else High = Mid - 1;
	    }
	    Kqua = Kqua + Value;
    }
    cout << Kqua;

}