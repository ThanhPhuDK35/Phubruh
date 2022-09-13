#include<bits/stdc++.h>
using namespace std;
long long n, k, a[2000001], j, Num, Cnt[2000001], Res=0;

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    j = 1;
    Num = 0;
    for(int i=1; i<=n; i++)
    {
        Cnt[a[i]] += 1;
        if(Cnt[a[i]] == 1) Num++;   
        if(Num < k) continue;
        while(Num > k)
        {
            Cnt[a[j]] -= 1;
            if(Cnt[a[j]] == 0) Num--;
            j++;
        }
        Res = max(Res , i - j + 1);
    }
    cout<<Res;
}




