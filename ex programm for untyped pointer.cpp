#include<stdio.h>
int main()
{
	int a=10;
	float b=2.4;
	void *p;
	p=&a;
	printf("the value of %d\n is ",*(int*)p);
	printf("the value of p is %d\n",p);
	p=&b;
    printf("the value of %.1\n is ",*(float*)p);
    printf("the value of p is %d\n",p);
    return 0;
}
