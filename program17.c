#include<stdio.h>

void Display(int iValue)
{
    register int iCnt=0;
    
    for(iCnt=1 ; iCnt<=iValue ; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iNo=0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
