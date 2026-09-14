// Counting the Vowels in a String
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowelcount(char *s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i]))
        {
            case 'A': 
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}


int main(void)
{
    char string[1000];

    // Enter a string
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character added by fgets()
    string[strcspn(string, "\n")] = '\0';

    int stringcount = vowelcount(string);
    printf("Vowel count: %d\n", stringcount);
}
