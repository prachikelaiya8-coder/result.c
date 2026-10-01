#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter your mark: ");
    scanf("%d", &marks);

    if(marks > 0 && marks <= 100)
    {
        if(marks > 90)
        {
            grade = 'A';
        }
        else if(marks > 80)
        {
            grade = 'B';
        }
        else if(marks > 70)
        {
            grade = 'C';
        }
        else if(marks > 60)
        {
            grade = 'D';
        }
        else if(marks > 50)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }

        printf("Grade = %c", grade);

        switch(grade)
        {
            case 'A':
                printf("Excellent work!");
                break;

            case 'B':
                printf("Well done");
                break;

            case 'C':
                printf("Good job");
                break;

            case 'D':
                printf("You passed, but you could do better");
                break;

            case 'E':
                printf("Well done");
                break;

            case 'F':
                printf("Sorry, you are failed!");
                break;
        }
    }
    else
    {
        printf("Invalid marks");
    }

    return 0;
}