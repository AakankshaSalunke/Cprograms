//Display even and odd digits   

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDigit = 0;

    if (iNo == 0)
    {
        iEvenCnt++;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Number of Even Digits are : %d \n",iEvenCnt);
    printf("Number of Odd Digits are : %d \n",iOddCnt);

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);

    return 0;
}