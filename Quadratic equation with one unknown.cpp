#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,Delt;
    double x1,x2;
    float  n1,n2,n3,n4;

    scanf("%lf%lf%lf",&a,&b,&c);

    Delt=b*b-4*a*c;

    if(a==0)
    {
        printf("Not a quadratic equation with one unknown\n");
        return 0;
    }


    if (Delt>=0)
    {
        x1=(-b+sqrt(Delt))/(2*a);
        x2=(-b+sqrt(Delt))/(2*a);

        if (x1>x2)
            printf("%.2lf %.2lf",x1,x2);
        else
            printf("%.2lf %.2lf",x2,x1);
    }

    else
    {
        n1=-b/(2*a);
        n2=-b/(2*a);
        n3=(sqrt(-b*b+4*a*c))/(2*a);
        n4=-(sqrt(-b*b+4*a*c))/(2*a);

        printf ("%.2lf%+.2lfi %.2lf%+.2lfi",n1,n3,n2,n4);
    }

    return 0;
}
