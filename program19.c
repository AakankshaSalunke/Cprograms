#include<stdio.h>

int Sumation()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt=1 ; iCnt<=5 ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Sumation();

    printf("Sumation is : %d\n",iRet);

    return 0;
}