// Leap Year
// if year % 4 != 0, it is a common year
// else if year % 100 != 0, it is a leap year
// else if year % 400 != 0, it is a common year
// else, it is a leap year
#include <stdio.h>
#include <stdbool.h>

bool isleapyear(int year)
{
    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 != 0) return false;
    else return true;
}


int main(void)
{
    int count = 0;
    // Showcase leap year from 1000 to 2100
    for (int y = 1800; y < 2100; y++)
    {
        if (isleapyear(y))
            {
                printf("%-6d", y);
                count++;
                // Start a new row after every 5 years
                if (count % 5 == 0) printf("\n");
            }
    }

    return 0;
}
