#include<stdio.h>
#include<math.h>

int GYS(int a, int b)
{
    if(a%b==0)
        return b;
    return GYS(b,a%b);
}

int GBS(int a, int b)
{
    return a*b/GYS(a,b);
}

int main()
{
   int a,b;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
       printf("%d %d\n",GYS(a,b),GBS(a,b));
   }
}
