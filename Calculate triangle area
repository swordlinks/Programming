#include<stdio.h>
#include<math.h>
#define PI 3.1415926
class point
    {
    private:
        float x1,x2,x3,y1,y2,y3,area;
    public:
        void input(float a,float b,float c,float d,float e,float f);
        void output();
    };
void point::input(float a,float b,float c,float d,float e,float f)
{
    x1=a;
    y1=b;
    x2=c;
    y2=d;
    x3=e;
    y3=f;
}
void point::output()
{
    area=(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/2;
    if(area==0)
        printf("not a triangle\n");
    else
    printf("%.2f\n",area+3);
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
        {
            float a,b,c,d,e,f;
            scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
            point point;
            point.input(a,b,c,d,e,f);
            point.output();
        }
    }
}

