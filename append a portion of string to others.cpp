#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	strncat(a,b,2);
	puts(a);
}
