#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

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

    return 0;
}