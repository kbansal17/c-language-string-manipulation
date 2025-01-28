#include<stdio.h>
#include<string.h>
main()
{
	char s[20],r[20];
	gets(s);
	gets(r);
	if(strcmp(s,r)==0)
	printf("equal");
	else
	printf("not equal");
}
