#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int *Arr, int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
    int iAns = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    printf("Even count is : %d \n",iEvenCnt);
    printf("Odd count is : %d \n",iOddCnt);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter the number of elements:");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the number :");
    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayEvenOddCount(ptr, iLength);

    free(ptr);

    return 0;
}