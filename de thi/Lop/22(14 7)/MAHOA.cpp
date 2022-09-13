#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    freopen("MAHOA.inp","r",stdin);
    freopen("MAHOA.out","w",stdout);
    cin>>s;
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i] == 97)
        {
            cout<<"1";
        }
        else
        {
            if(s[i] == 98)
            {
                cout<<"2";
            }
            else
            {
                if(s[i] + s[i+1] == 99)
                {
                    cout<<"3";
                    i++;
                }
                else
                {
                    if(s[i] + s[i+1]+s[i+2] == 295)
                    {
                        cout<<"4";
                        i+=2;
                    }
                    else
                    {
                        if(s[i]+s[i+1]+s[i+2] == 296)
                        {
                            cout<<"5";
                            i+=2;
                        }
                        else
                        {
                            if(s[i]+s[i+1]+s[i+2] == 294 && s[i] == 'a')
                            {
                                cout<<"6";
                                i+=2;
                            }
                            else
                            {
                                if(s[i]+s[i+1]+s[i+2] == 294)
                                {
                                    cout<<"7";
                                    i+=2;
                                }
                                else
                                {
                                    if(s[i]+s[i+1]+s[i+2] == 292)
                                    {
                                        cout<<"8";
                                        i+=2;
                                    }
                                    else
                                    {
                                        if(s[i]+s[i+1]+s[i+2] == 295)
                                        {
                                            cout<<9;
                                            i+=2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
