#include<bits/stdc++.h>
using namespace std;
int a, b, c, m;
int main(){

    cin >> a;
    if(a==0)
        cout<<0;
    else
    {
        c = 9;
        while(a != 0)
        {
            b = a % 10;
            a = a / 10;
            if(b < c )
            {
                c = b;
            }
        }
        cout << c;
    }

}
