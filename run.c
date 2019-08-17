#include <stdio.h>
void main()
{
        int x;
        double d,e,f;
        x=2000;
        while(x<=2500)
        {
                d=x%4;
                e=x%100;
                f=x%400;
                if(d==0)
                        if(e!=0)
                                printf("%d年是闰年.\n",x);
                        else if(f==0)
                                printf("%d年是闰年.\n",x);
                x+=1;

        }
}
