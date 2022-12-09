#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    bool bRet = 0, iValue = 0;

    printf("Enter the number of elements:");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the number :");
    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out occurance :");
    scanf("%d",&iValue);

    bRet = (ptr, iLength, iValue);
    if(bRet == true)
    {
        printf(" %d is occured in the array ",iValue);
    }
    else
    {
        printf("%d is not occured in the array",iValue);
    }

    free(ptr);

    return 0;
}