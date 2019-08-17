#include<stdio.h>
void main()
{
        int n,i,j,d;
        i=1;
        d=2;
        j=1;
        printf("Input a number:\n");
        scanf("%d",&n);
        while(i<n)
            {
                j *= i;
                i += d;
            }
        printf("n!=%d\n",j);
}
