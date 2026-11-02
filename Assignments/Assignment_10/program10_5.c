#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;

    
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    
    dSquareMeter = iValue * 0.0929;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf", dRet);

    return 0;
}