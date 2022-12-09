// input = 4
// output = A  B  C  D
// ASCII Value = American Standard Code for Information Interchange

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch1 = 'A';
    char ch2 = 'a';

    if(iNo < 0)
    {
        iNo =-iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++,ch1++,ch2++)
    {
        printf("%c%c\t",ch1,ch2);
        //ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}