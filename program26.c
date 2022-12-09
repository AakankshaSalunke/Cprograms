// Display of non factors 

#include<stdio.h>

void DisplayNonFactor(int iNo)
{
    register int iCnt = 0;

    printf("Non Factors of %d is : \n",iNo);

    for(iCnt=1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFactor(iValue);

    return 0; ;

}