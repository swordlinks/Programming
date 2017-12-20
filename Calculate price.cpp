#include<stdio.h>
#define PI 3.1415926
class circle
    {
    private:
        float r1,r2;
        float p;
        float p1;
    public:
        void input(float a,float b,float c);
        void output();
    };
void circle::input(float a,float b,float c)
{
    r1=a;
    r2=b;
    p=c;
}
void circle::output()
{
    p1=(r2*r2-r1*r1)*PI*p;
    printf("%.2f\n",p1);
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
        {
            float a,b,c;
            scanf("%f%f%f",&a,&b,&c);
            circle circle1;
            circle1.input(a,b,c);
            circle1.output();
        }
    }
}

