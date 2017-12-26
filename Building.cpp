#include<iostream>
#include<string>
using namespace std;
class Building
{
public:
    virtual void display()=0;
};
class jiaoxue:public Building
{
private:
    int bh;
    int cs;
    int jss;
    int sys;
    int S;
public:
    jiaoxue(int bh,int cs,int jss,int sys,int S);
    void display();
};
jiaoxue::jiaoxue(int bh,int cs,int jss,int sys,int S)
{
    this->bh=bh;
    this->cs=cs;
    this->jss=jss;
    this->sys=sys;
    this->S=S;
}
void jiaoxue::display()
{
    cout<<"The teach building:"<<bh<<"#,"<<cs<<" layers,"<<jss<<" classrooms,"<<sys<<" labs,"<<S<<"m2."<<endl;

}
class ssl:public Building
{
private:
    int bh;
    int cs;
    int jss;
    int xs;
    int S;
public:
    ssl(int bh,int cs,int jss,int xs,int S);
    void display();
};
ssl::ssl(int bh,int cs,int jss,int xs,int S)
{
    this->bh=bh;
    this->cs=cs;
    this->jss=jss;
    this->xs=xs;
    this->S=S;
}
void ssl::display()
{
    cout<<"The dorm building:"<<bh<<"#,"<<cs<<" layers,"<<jss<<" dorms,"<<xs<<" students,"<<S<<"m2."<<endl;

}
int main()
{
    int n;
    int type;
    int q,w,e,r,s;
    Building *p;
    cin>>n;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>q>>w>>e>>r>>s;
            jiaoxue a(q,w,e,r,s);
            p=&a;
            p->display();


        }
        else
        {
            cin>>q>>w>>e>>r>>s;
            ssl b(q,w,e,r,s);
            p=&b;
            p->display();
        }
    }
}
