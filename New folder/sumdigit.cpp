#include<bits/stdc++.h>
using namespace std;
long long a, b, c;

int main()
{

    cin >> a;
    c=0;
    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b;
    }
    cout << c;
}

