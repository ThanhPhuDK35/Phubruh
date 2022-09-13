#include <bits/stdc++.h>
using namespace std;
long long L, X, r;
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
    cin>>L>>X;
    long long Dem = 0 , Rmin , Rmax;
    for(long long i = sqrt(L) ; i <= 100000009; i++)
    {
        if(i * i < L) continue;
        int Tem = i , a = 0 , Div = Prime[i];
        while(Tem % Div == 0)
        {
            a++;
            Tem /= Div;
        }
        if(Tem == 1 && Prime[2 * a + 1] == 2 * a + 1)
        {
            Dem++;
            if(Dem == X) Rmin = i * i;
            if(Dem == X + 1)
            {
                Rmax = i * i - 1;
                break;
            }
        }
    }
    cout<<Rmin<<" "<<Rmax;
}
