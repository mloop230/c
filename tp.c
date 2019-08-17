#include <stdio.h>
void main()
{
	int x,y,z;
	x=1;
	y=1;
	z=(x++,y++,++y);
	printf("%d,%d,%d\n",x,y,z);
}
