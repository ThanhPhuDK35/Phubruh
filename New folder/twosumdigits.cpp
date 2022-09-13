#include<bits/stdc++.h>
using namespace std;
int a, b, c, g;
int main(){
    freopen("TwoSumdigits.inp","r",stdin);
    freopen("TwoSumdigits.out","w",stdout);
    cin >> a>> g;

    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b;
    }
    while(g > 0)
    {
        b = g % 10;
        g = g / 10;
        c=c+b;
    }

    cout << c;
}
