#include<stdio.h>
int main()
{
	int i,alp=0,num=0,sym=0;
	char str[100];
	char *s=str;
	
	printf("Enter the string::");
	gets(str);
	
	while(*s)
	{
		if((*s>='a' && *s<='z') || (*s>='A' && *s<='Z'))
		{
		alp++;
		}
		else if(*s>='0' && *s<='9')
		{
		num++;
		}	
		else
		{
		sym++;
		}
		
		s++;	
	}
	printf("The alphabet count is: %d\n",alp);
	printf("The number count is: %d\n",num);
	printf("The symbol count is: %d",sym);
}
