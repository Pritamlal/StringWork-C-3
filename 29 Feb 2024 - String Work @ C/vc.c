#include<stdio.h>

int main()
{
    int words = 0, i = 0;
    char str[100];

    printf("Enter the string: ");
    gets(str);

    // Loop until the end of the string
    while(str[i] != '\0')
    {
        // Check if the current character is a space, newline, or tab
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            // If yes, increment the word count
            words++;
        }
        // Move to the next character
        i++;
    }
    
    // Increment word count by 1 to account for the last word
    words++;

    printf("Number of words in the string: %d\n", words);

    return 0;
}

