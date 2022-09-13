#include<bits/stdc++.h>
using namespace std;
int a, b;
int main(){
    freopen("LeftDigit.Inp","r",stdin); // mo tep de doc
    freopen("LeftDigit.Out","w",stdout); //mo tep de ghi
    cin >> a;

    while(a > 0)
    {
        b = a % 10;
        a = a / 10;

    }
    cout << b;
}
