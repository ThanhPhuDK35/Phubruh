#include<bits/stdc++.h>
using namespace std;
long long ngay, thang, nam, n;

int main()
{
    freopen("DATE.inp","r",stdin);
    freopen("DATE.out","w",stdout);
    cin>>ngay>>thang>>nam>>n;
        ngay=ngay + n;
        if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 )
        {
            while(ngay > 31)
            {


            if(ngay > 31)
            {
                if(thang == 12)
                {
                   ngay=ngay-31;
                   thang=1;
                   nam++;
                }

            }
                else
               {
                    ngay=ngay-31;
                    thang++;
                }
                if((thang == 4 || thang == 6 || thang == 9 || thang == 11 ) && ngay > 30)
                {
                                       ngay=ngay-30;
                   thang++;
                }
            }

        }

        if(thang == 4 || thang == 6 || thang == 9 || thang == 11 )
        {
            while(ngay>30)
            {

            if(ngay > 30)
            {
                   ngay=ngay-30;
                   thang++;
            }
            if((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 ) && ngay > 31)
            {
                                    ngay=ngay-31;
                    thang++;
            }
            }
        }
        if(thang == 2)
        {
            if((nam%100) % 4 == 0)
            {
                while(ngay>29)
                {


                if(thang==2 && ngay>29)
                {
                    ngay=ngay-29;
                    thang++;
                }
            if((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) && ngay > 31)
            {
                    ngay=ngay-31;
                    thang++;
            }
                if((thang == 4 || thang == 6 || thang == 9 || thang == 11 ) && ngay > 30)
                {
                   ngay=ngay-30;
                   thang++;
                }
                if(thang == 12)
                {
                   ngay=ngay-29;
                   thang=1;
                   nam++;
                }
                }
            }
            else
            {
                while(ngay>28)
                {


                if(ngay>28)
                {
                    ngay=ngay-28;
                    thang++;
                }
            if((thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 ) && ngay > 31)
            {
                                    ngay=ngay-31;
                    thang++;
                    if(thang == 12)
                {
                   ngay=ngay-31;
                   thang=1;
                   nam++;
                }
            }
                if((thang == 4 || thang == 6 || thang == 9 || thang == 11 ) && ngay>30)
                {
                                       ngay=ngay-30;
                   thang++;
                    if(thang == 12)
                {
                   ngay=ngay-30;
                   thang=1;
                   nam++;
                }
                }

                }
            }

        }
        cout<<ngay<<" "<<thang<<" "<<nam;
}





