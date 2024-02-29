#include<stdio.h>
int main()
{
	int i,alp=0,num=0,sym=0;
	char str[100];
	
	printf("Enter the string::");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
		alp++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
		num++;
		}	
		else
		{
		sym++;
		}	
	}
	printf("The alphabet count is:%d\n",alp);
	printf("The number count is:%d\n",num);
	printf("The symbol count is:%d",sym);
}
