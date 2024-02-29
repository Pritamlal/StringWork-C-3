#include<stdio.h>
int main()
{
	char str[100],reverse[100];
	int len,revIndex,strIndex; 
	printf("Enter the string::");
	gets(str);
	
	len=strlen(str);
	
	revIndex=0;
	strIndex=len-1;
	
	while(strIndex>=0)
	{
		reverse[revIndex]=str[strIndex];
		
		strIndex--;
		revIndex++;
	}
	
	 reverse[revIndex] = '\0';

    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);
}
