#include<bits/stdc++.h>
using namespace std;


long long n, s, b;
int main()
{
   for(int i = 0; i < 3; i++)
   {
       cin>>n;
       s=0;
           while(n > 0)
            {
                b = n % 10;
                n = n / 10;
                if(b==3 || b==5 || b==7)
                s=1;
            }
        if (s ==1)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
   }

}
