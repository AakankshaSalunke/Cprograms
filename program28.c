// Diplay Table

#include <stdio.h>

void DisplayTable(int iNo)
{
    printf("___________**************__________\n");
    printf("Table of %d is : \n",iNo);
    printf("___________**************__________\n");

    int iCnt = 0;
    int iAns = 0;
    for(iCnt=1 ; iCnt <= 10 ; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\n",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf ("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}    