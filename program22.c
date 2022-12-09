// Disaplay Factors 

#include<stdio.h>

//O(N/2)
void DisplayFactor(int iNo)
{ 
    int iCnt = 0;
    
    printf("Factors of %d is : \n",iNo);

    for(iCnt=1 ; iCnt<= (iNo/2) ; iCnt++)
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}