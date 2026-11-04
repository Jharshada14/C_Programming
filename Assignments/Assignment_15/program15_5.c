#include<stdio.h>

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    if(iTotalMarks == 0)
    {
        return 0.0f;
    }

    float fPercentage = 0.0f;
    fPercentage = ((float)iObtainedMarks / (float)iTotalMarks) * 100.0f;
    
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.1f%%", fRet);

    return 0;
}