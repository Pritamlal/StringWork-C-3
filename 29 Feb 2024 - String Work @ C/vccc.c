#include<stdio.h>
int main()
{
	int words=1,i=0;
	char str[i];
	printf("enter the string::");
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
		{
			words++;	
		}	
		i++;
	}	
	printf("%d",words);
}
