#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int alpa=0,vowels=0,i,len;
	printf("enter the string::");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U')
		vowels++;
		else
		alpa++;
	}
	printf("The vowels: %d \n",vowels);
	printf("The alphabets: %d \n",alpa);
}
