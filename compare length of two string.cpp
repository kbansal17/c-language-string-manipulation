#include<stdio.h>
#include<string.h>
main()
{
	int a,b;
	char s[20],r[20];
	gets(s);
	gets(r);
	a=strlen(s);
	b=strlen(r);
	printf("%d\n%d\n",a,b);
	if(a>b)
	puts(s);
	else
	puts(r);
}
