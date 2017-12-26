#include<stdio.h>
int main()
{
    int x,y;
    while(~scanf("%d%d",&x,&y))
    {
        int a[x][y], b[y][x];
        int i, j;
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        }
        for (i = 0; i < y; i++)
        {
            for (j = 0; j < x; j++)
            {
                printf("%5d", b[i][j]);
            }
            printf("\n");
        }
    }
}
