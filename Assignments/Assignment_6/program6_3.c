#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid purchase amount!\n");
        return;
    }
    if (fAmount < 1000.0f)
    {
        fFinalAmount = fAmount;
    }
    else if (fAmount >= 1000.0f && fAmount < 5000.0f)
    {
        fFinalAmount = fAmount - (fAmount * 0.10f);
    }
    else
    {
        fFinalAmount = fAmount - (fAmount * 0.20f);
    }
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);
    
    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}