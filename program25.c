// check Number is perfect or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{ 
    register int iCnt = 0;
    int iSum = 0;

    for(iCnt=1 ; iCnt<= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}