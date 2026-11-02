#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRet = 0;

    
    iRet = iNo * 70;

    return iRet;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}