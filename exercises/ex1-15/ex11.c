// String Concatenation
// s1 = "abc" - s1_length = 3
// (data: indexes) -> (a: 0); (b: 1); (c: 2); (\0: 3)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stringappend(char *s1, char *s2)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;
    char *s = calloc(size, sizeof(char));

    for (int i = 0; i < s1_length; i++)
        s[i] = s1[i];
    
    for (int i = 0; i < s2_length; i++)
        s[s1_length + i] = s2[i];
    
    s[size - 1] = '\0';

    return s;


}


int main(void)
{
    char firststr[200];
    char secondstr[100];

    // Enter a string
    printf("Enter first string: ");
    fgets(firststr, sizeof(firststr), stdin);

    // Remove the newline character added by fgets()
    firststr[strcspn(firststr, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(secondstr, sizeof(secondstr), stdin);

    // Remove the newline character added by fgets()
    secondstr[strcspn(secondstr, "\n")] = '\0';

    char *s = stringappend(firststr, secondstr);
    printf("s: %s\n", s);

}
