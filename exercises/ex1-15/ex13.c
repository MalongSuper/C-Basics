// Flip a string's lowercase characters to uppercase and vice versa
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void flipletter(char *s)
{
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }
}


int main(void)
{
    char string[1000];

    // Enter a string: "abcdeABCDE"; "ThiS iS My sTrInG!"
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character added by fgets()
    string[strcspn(string, "\n")] = '\0';

    // Flip
    flipletter(string);
    printf("String after: %s\n", string);

}
