#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	int c,d;
	gets(a);
	gets(b);
	c=strlen(a);
	d=strnlen(b,6);
	printf("%d",c);
	printf("\n%d",d);
}
