// Count the Occurrences of a Value in an Array
#include <stdio.h>

int occurrences (int array[], int length, int to_find)
    {
        int count = 0;

        for (int i = 0; i < length; i++)
            if (array[i] == to_find) 
            count++;

        return count;
    }

int main(void)
{
    int n;

    // Get the size of the array
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Declare an array of size n
    int myarray[n];

    // Iterate n times to enter the element the array
    printf("Enter %d numbers separated by spaces or newlines:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myarray[i]);
    }

    // Printing the array
    printf("\nYour array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    // Input the number that you want to find
    int k;
    printf("Enter the element (k): ");
    scanf("%d", &k);

    // Count occurrences
    int findvalue = occurrences(myarray, n, k);
    printf("Occurrences: %d\n", findvalue);

}
