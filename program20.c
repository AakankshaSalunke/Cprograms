#include<stdio.h>

int Sumation(int iValue)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt=1 ; iCnt<=iValue ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
}

int main()
{
    int iRet = 0;
    int iNo = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    iRet = Sumation(iNo);

    printf("Sumation is : %d\n",iRet);

    return 0;
}