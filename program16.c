#include<stdio.h>

void Display(int iValue)
{
    register int iCnt=0;
    
    iCnt=1;

    do
    {
        printf("Jay Ganesh...\n");
        iCnt++ ;
    } while(iCnt<=iValue);
}

int main()
{
    int iNo=0;

    printf("Enter the Number of Iteration : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}