#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; char *s=str;
	int alpa=0,vowels=0,i,len;
	printf("enter the string::");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	{
		switch(*s)
		{
				case 'a':
				case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
				vowel++;
				break;
				default:
				alpa++;	
		}
		s++;
	}
}
	printf("The vowels: %d \n",vowels);
	printf("The alphabets: %d \n",alpa);
}
