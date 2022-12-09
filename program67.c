// input = rows:4  columns:4
// output =
/*
        *  *  *  *
        *  *  *  *
        *  *  *  *
        *  *  *  *
*/

#include<stdio.h>

void Display(int iNo1,int iNo2)
{
    int i = 0, j = 0;

    if(iNo1 < 0)
    {
        iNo1 =-iNo1;
    }

    for(i = 1; i <= iNo1; i++)
    {
        for(j = 1; j <= iNo2; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows: ");
    scanf("%d",&iValue1);

    printf("Enter Columns: ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}