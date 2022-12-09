// Check whether number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    int iTemp = iNo;

    for(iRev = 0; iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev =(iRev * 10) + iDigit ; 
    }
    return(iRev == iTemp);
}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CheckPalindrome(iValue);

    if(iRet == true)
    {
        printf("%d is palindrome Number.\n",iValue);
    }
    else
    {
        printf("%d is not a palindrome Number.\n",iValue);   
    }

    return 0;
}