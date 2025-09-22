/////////////////////////////////////////////////////////////
// File Name :   Assignment22_4.c
// Description : Used to check whether it capital or not
// Input :       char
// Output :      Boolean
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkCapital(char ch)
{
    if((ch > 'A') && (ch <'Z'))
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
    bRet = ChkCapital(cValue);
    if(bRet == TRUE)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }
    
    return 0;
}