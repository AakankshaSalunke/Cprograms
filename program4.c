#include<stdio.h>

int AdditionOfNumbers(ivalue1,ivalue2)
{
    int iAns = 0;

    iAns = ivalue1 + ivalue2;

    return iAns;
}

int main()
{
    int ino1=0, ino2=0, iRet = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&ino1);

    printf("Enter second number : \n");
    scanf("%d",&ino2);

    iRet = AdditionOfNumbers(ino1,ino2);

    printf("Addition is : %d\n",iRet);
    
    return 0;
}