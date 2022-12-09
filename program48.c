#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[] , int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are :");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

    iRet = Summation(Arr,5);
    printf("\nAddition of all elements is :%d",iRet);

    return 0;
}