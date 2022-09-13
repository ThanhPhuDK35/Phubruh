#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){

    cin >> a;
    c = 0;
    while(a > 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
    cout << c;
}
