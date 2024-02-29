#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],pal[100];
	int len,startIndex,endIndex;
	printf("Enter the string::");
	gets(str);
	
	len=0;
	while(str[len]="\0")
	len++;
	
	startIndex=0;
	endIndex=len-1;
	
	while(startIndex<=endIndex)
	{
		if(str[startIndex]!=str[endIndex])
		break;
		startIndex++;
		endIndex--;
	}
	
	if(startIndex>=endIndex)
	printf("String is palindrome");
	else
	printf("String is not palindrome");
	
	return 0;
}
