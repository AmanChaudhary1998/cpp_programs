#include<stdio.h>
int main()
{
	int a=15;
	 int *b;
	  b=&a;
	printf("value of a is %d\n",a);
	printf("value of a is %d\n",*(&a));
	printf("value of a is %d\n",*b);
	printf("address of a is %u\n",&a);
	printf("address of a is %u\n",b);
	printf("address of b is %u\n",&b);
	printf("value of b= address of a is %u\n",b);
	return 0;
}
