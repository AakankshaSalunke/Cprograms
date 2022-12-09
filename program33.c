// Display odd factors
// time complexcity N/4

#include<stdio.h>

void DisplayOddFactors(int iNo)
{
    int iCnt = 0;
    
    for(iCnt=1 ; iCnt<= (iNo/2) ; iCnt=iCnt+2)     //iCnt+=2
    {
        if(iNo % iCnt == 0) 
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf ("%d",&iValue);

    DisplayOddFactors(iValue);

    return 0;
}