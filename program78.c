/*
    Input :
    Row = 4
    column = 4

    *   $   $   $
    *   *   $   $
    *   *   *   $
    *   *   *   *
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Row number and column numbers are different");
        return;
    }

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if( i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf("$\t");
            }  
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}