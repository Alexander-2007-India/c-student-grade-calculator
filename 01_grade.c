/*A program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.");
        return 1; // Exit with an error code
    }

    if (marks >= 90)
    {
        printf("You have achieved grade A");
    }

    else if (marks >= 80)
    {
        printf("You have achieved grade B");
    }

    else if (marks >= 70)
    {
        printf("You have achieved grade C");
    }

    else if (marks >= 60)
    {
        printf("You have achieved grade D");
    }

    else if (marks >= 50)
    {
        printf("You have achieved grade E");
    }

    else
    {
        printf("You have achieved grade F");
    }
    return 0;
}