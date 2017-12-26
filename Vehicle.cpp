#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class vehicle
{
public:
    virtual void run()
    {
        cout<<"vehicle is running\n";
    }
};
class car:virtual public vehicle
{
private:
    string s;
public:
    void run(string ss)
    {
        string s1="The car is ";
        s=ss;
        cout <<s1<<s<<"."<<endl;
    }


};
class Truck:virtual public vehicle
{
private:
    string s;
public:

    void run(string ss)
    {
        string s1="The truck load is ";
        s=ss;
        cout <<s1<<s<<"tons."<<endl;

    }
};

class Boat:public car,public Truck
{
private:
    string s;
public:

    void run(string ss)
    {
        string s1="The boat speed is ";
        string s2="km/h.";
        s=ss;
        cout<<s1<<s<<s2<<endl;
    }
};
int main()
{

    vehicle v;
    car c;
    Boat b;
    Truck t;

    int a;
    cin >> a;
    while(a--)
    {
        vehicle *pv=&v;
        vehicle *pc=&c;
        vehicle *pb=&b;
        vehicle *pt=&t;
        int num=0;
        string s;
        s.clear();
        cin >> num>> s;
        if(num==1)
        {
            car mycar;
            mycar.run(s);
        }
        if(num==2)
        {
            Truck myt;
            myt.run(s);
        }
        if(num==3){
            Boat myb;
            myb.run(s);
        }
    }
}
