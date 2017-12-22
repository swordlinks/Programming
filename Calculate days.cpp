#include<stdio.h>
int a[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int nian,yue,ri;
    while(~scanf("%d%d%d",&nian,&yue,&ri))
    {
        int sum=0;
        for(int i=0; i<yue; i++)
        {
            sum+=a[i];
        }
        sum+=ri;
        if(nian%4==0&&nian%100!=0||nian%400==0)
        {
            sum+=1;
            printf("YES ");
        }
        else
            printf("NO ");

        printf("%d\n",sum);
    }

    return 0;
}

