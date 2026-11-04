#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
   
    if((iStart > iEnd) || (iStart < 0 && iEnd < 0 && iStart < iEnd)) 
    {
        
    }

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    int iCnt = 0;

    
    if(iStart % 2 != 0)
    {
        iStart++;
    }

    
    for(iCnt = iStart; iCnt <= iEnd; iCnt += 2)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}