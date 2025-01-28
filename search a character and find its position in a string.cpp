#include<stdio.h>
#include<string.h>
main()
{
	char a[20],*b;
	int c;
	gets(a);
	b=(char*)strchr(a,'u');
	c=b-a;
	if(c>=0)
	printf("char found at %d position",b-a);
	else
	printf("not found");
}
