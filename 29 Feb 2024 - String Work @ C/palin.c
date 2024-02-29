#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],pal[100];
	int len,palindex,strindex;
	printf("Enter the string::");
	gets(str);
	
	len=strlen(str);
	
	palindex=0;
	strindex=len-1;
	
	while(strindex>=0)
	{
		pal[palindex]=str[strindex];
		printf("%c",pal);
		strindex--;
		palindex++;
	}
}
