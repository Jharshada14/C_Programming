#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid range");
        return 0;
    }

    int iSum = 0;
    int iCnt = 0;

    if(iStart % 2 != 0)
    {
        iStart++;
    }

    
    for(iCnt = iStart; iCnt <= iEnd; iCnt += 2)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    
    if(iValue1 <= iValue2 && iValue1 >= 0 && iValue2 >= 0)
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}