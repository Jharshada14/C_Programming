#include<stdio.h>

int KMToMeter(int iNo)
{
    int iRet = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    iRet = iNo * 1000;

    return iRet;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is %d", iRet);

    return 0;
}