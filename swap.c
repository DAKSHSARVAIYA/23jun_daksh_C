#include <stdio.h>
int main ()
{
	int a=10,b=20,c;
	printf("Before swapping :\n = %d\nb = %d",a,b);
	// swapping logic here
	c=a;
	a=b;
	b=c;
	printf("\n After Swapping:\n= %d\nb=%d",a,b);
	return 0;
	
}
