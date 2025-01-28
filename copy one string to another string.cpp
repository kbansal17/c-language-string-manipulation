#include<stdio.h>
#include<string.h>
main()
{
	char a,s[20],r[20];
	gets(s);
	gets(r);
	
	strcpy(s,r);
	puts(s);
}
