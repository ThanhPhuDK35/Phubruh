#include <bits/stdc++.h>
#define nmax 1000005
using namespace std;
long long l, r, Res;
long long Prime[10000001];

void sangNT()
{
    memset(Prime , 0 , sizeof Prime);
    Prime[0] = -1 , Prime[1] = -1;
    for(long long i = 2 ; i <= 1000000 ; i++)
    {
        if(Prime[i] == 0)
        {
            Prime[i] = i;
            for(long long j = i * i ; j <= 1000000 ; j += i)
            {
                Prime[j] = i;
            }
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>r;
    Res=0;
    sangNT();
    for(long long i = sqrt(l) ; i <= sqrt(r) ; i++)
    {
        if(i*i < l || i <= 1) continue;
        long long Tem = i , a = 0 , Div = Prime[i];
        while(Tem % Div == 0)
        {
            a++;
            Tem /= Div;
        }
        if(Tem == 1 && Prime[2 * a + 1] == 2 * a + 1)
                Res++;
    }
    cout<<Res;
}
