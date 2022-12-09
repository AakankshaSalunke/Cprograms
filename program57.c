#include<stdio.h>
#include<stdlib.h>

int checkOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0, iValue = 0;

    printf("Enter the number of elements:");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the number :");
    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out the index of first occurance :");
    scanf("%d",&iValue);

    iRet = (ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf(" There is no %d in the array ",iValue);
    }
    else
    {
        printf("%d is occured in the array at index %d",iValue,iRet);
    }

    free(ptr);

    return 0;
}