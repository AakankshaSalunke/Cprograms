// Sum of non factors 

#include<stdio.h>

int SumOfNonFactor(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;

    printf("Non Factors of %d is : \n",iNo);

    for(iCnt=1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf ("%d",&iValue);

    iRet = SumOfNonFactor(iValue);

    printf("Sum of non factors is : %d",iRet);

    return 0; ;

}