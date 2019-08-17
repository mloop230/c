#include <stdio.h>
#include <math.h>
void main()
{
        int i=1,j,n;
        float x=1,sum=0;
        printf("Input a number:\n");
        scanf("%d",&n);
        while(i<=n)
        {
                sum+=x;
                j=pow(-1,i);
                x=1.0/(1+i)*j;
                i+=1;
        }
        printf("The sum is %.10f.\n",sum);
}
