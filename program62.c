#include<stdio.h>
#include<stdlib.h>

int checkLastOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iPos = -1; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }

    return iPos;
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

    printf("Enter the element to find out last occurance :");
    scanf("%d",&iValue);

    iRet = checkLastOccurance(ptr, iLength, iValue);
    
    if(iRet == -1)
    {
        printf("There is no %d in the array",iValue);
    }
    else
    {
        printf("%d is last occured in the array at last index %d",iValue,iRet);
    }

    free(ptr);

    return 0;
}