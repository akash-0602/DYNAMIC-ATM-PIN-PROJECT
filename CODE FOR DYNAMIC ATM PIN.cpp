#include<iostream>
#include<vector>
#include<chrono>
#include<ctime>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fixed_pos_1,fixed_pos_2,dynamic_pos_1,dynamic_pos_2,c,d;
    char a,b;
    vector<int> v1={1,2,3,4};
    string pin="abcd";
    cout<<"INITIAL ATM PIN SET UP"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<endl;
    }
    cout<<"enter fixed pos_1"<<endl;;
    cout<<"available choices=[";
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"] : "<<endl;
    cin>>fixed_pos_1;
    cout<<"enter number for fixed_pos_1 (range 0-9) : ";
    cin>>a;
    cout<<"enter fixed_pos_2"<<endl;
    cout<<"available choices=[";
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        if(*i!=fixed_pos_1)
        {
            cout<<*i<<" ";
        }
    }
    cout<<"] : "<<endl;
    cin>>fixed_pos_2;
    cout<<"enter number for fixed_pos_2 range(0-9) : ";
    cin>>b;
    cout<<"enter dynamic_pos_1"<<endl;
    cout<<"available choices=[";
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        if(*i!=fixed_pos_1 && *i!=fixed_pos_2)
        {
            cout<<*i<<" ";
        }
    }
    cout<<"] : "<<endl;
    cin>>dynamic_pos_1;
    cout<<"enter adding number for dynamic pos_1 range(1-3) : ";
    cin>>c;
    cout<<"enter dynamic_pos_2"<<endl;
    cout<<"available choices=[";
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        if(*i!=fixed_pos_1 && *i!=fixed_pos_2 && *i!=dynamic_pos_1)
        {
            cout<<*i<<" ";
        }
    }
    cout<<"] : "<<endl;
    cin>>dynamic_pos_2;
    cout<<"enter adding number for dynamic_pos_2 range(1-3) : ";
    cin>>d;
    for(int i=0;i<6;i++)
    {
        if(i==3)
        {
            cout<<"PIN SET UP COMPLETE";
        }
        cout<<endl;
    }
    string initial="xxxx";
    initial[fixed_pos_1-1]=a;
    initial[fixed_pos_2-1]=b;
    initial[dynamic_pos_1-1]='-';
    initial[dynamic_pos_2-1]='-';
    cout<<"INITIALLY SETTED PIN : "<<initial;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    auto timenow =chrono::system_clock::to_time_t(chrono::system_clock::now());
    string t=ctime(&timenow);
    string p(1,t[14]);
    string q(1,t[15]);
    stringstream x(p),y(q);
    int u=0,v=0;
    x>>u;
    y>>v;
    int l=u+c;
    int m=v+d;
    if(l/10>0)
    {
        l=l%10;
    }
    if(m/10>0)
    {
        m=m%10;
    }
    ostringstream g,h;
    g<<l;
    h<<m;
    string e=g.str();
    string f=h.str();
    pin[fixed_pos_1-1]=a;
    pin[fixed_pos_2-1]=b;
    pin[dynamic_pos_1-1]=e[0];
    pin[dynamic_pos_2-1]=f[0];
    cout<<"YOUR ATM PIN UPDATED WITH REAL TIME : "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"YOUR LOGIN TIME IS : "<<t[11]<<t[12]<<":"<<t[14]<<t[15]<<" "<<"HRS";

    for(int i=0;i<3;i++)
    {
        cout<<endl;
    }
    string user_pin;
    cout<<"ENTER ATM PIN : ";
    cin>>user_pin;
    for(int i=0;i<5;i++)
    {
        cout<<endl;
    }
    if(user_pin==pin)
    {
        cout<<"YOUR PIN "<<pin<<" IS CORRECT,WIHDRAW YOUR MONEY";
        for(int i=0;i<5;i++)
        {
            cout<<endl;
        }
    }
    else
    {
        cout<<"OPPS,YOUR PIN IS WRONG AND "<<"CORRECT PIN IS "<<pin;
        for(int i=0;i<5;i++)
        {
            cout<<endl;
        }
    }

}
