#include<bits/stdc++.h>
using namespace std;
long long a, b, c, x, s;

int main(){

    cin >> a;
    x=a;
    int dem=0;
    while(x>0)
    {
        x=x/10;
        dem++;
    }
    x=a;
    c=0;
    while(x > 0)
    {
        b = x % 10;
        s=b;
        x = x / 10;
        for(int i=1; i<=dem; i++)
        {
            b=b*s;
        }
        c=c+b;
    }
    if(c==a)
    cout << "YES";
    else
        cout<<"NO";
}

