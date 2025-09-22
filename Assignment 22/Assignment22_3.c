/////////////////////////////////////////////////////////////
// File Name :   Assignment22_3.c
// Description : Used to check whether it contains digit in it  or not
// Input :       char
// Output :      Boolean
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkDigit(char ch)
{
    if((ch > '0') && (ch <'9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
    printf("Enter a character:\n");
    scanf("%c",&cValue);
    bRet = ChkDigit(cValue);
    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }
    
    return 0;
}