// Check If A String Is A Palindrome
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int len = strlen(string);

    for (int i = 0; i < middle; i++)
        if (string[i] != string[len - i - 1])
            return false;

    return true;
}


int main(void)
{
    char string[100];

    // Enter a string
    // Sample: "abccba"; "abcdcba"; "accacca"; "accabca"
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character added by fgets()
    string[strcspn(string, "\n")] = '\0';

    // Check for palindrome
    if (is_palindrome(string))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
