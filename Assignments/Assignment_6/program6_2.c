#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (iAge < 0 || fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid input\n");
        return;
    }

    if (fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n"); 
    }
    else
    {
        printf("Not Eligible\n"); 
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    
    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);
    
    CheckAdmission(fMarks, iAge);
    
    return EXIT_SUCCESS;
}