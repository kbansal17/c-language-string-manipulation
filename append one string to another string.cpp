#include<stdio.h>
#include<string.h>
main()
{
	char s[20],r[20];
	gets(s);
	gets(r);
	
	strcat(s,r);
	puts(s);
}
