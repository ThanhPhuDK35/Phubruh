#include<bits/stdc++.h>
using namespace std;

long long nguoc(long long n)
{
    long long tmp;
    long long res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;

}


int main()
{
    freopen("Bai2.inp","r",stdin);
    freopen("Bai2.out","w",stdout);
    long long a;
    cin>>a;
    long long b=nguoc(a);
    long long e=__gcd(a, b);
    if(e == 1)
        cout<<"Co";
    else
        cout<<"Khong";
}
