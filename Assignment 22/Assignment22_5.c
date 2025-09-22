/////////////////////////////////////////////////////////////
// File Name :   Assignment22_5.c
// Description : Used to display timing
// Input :       char
// Output :      Boolean
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>


void ChkSmall(char ch)
{
    switch(ch)
    {
        case 'A':
        printf("Your exam at 7 AM\n");
        break;

        case 'B':
        printf("Your exam at 8.30 AM\n");
        break;

        case 'C':
        printf("Your exam at 9.20 AM\n");
        break;

        case 'D':
        printf("Your exam at 10.30 AM\n");
        break;

        default:
        printf("Invalid Class\n");
        break;

    }

}
int main()
{
    char cValue = '\0';
    printf("Enter your class ");
    scanf("%c",&cValue);
    ChkSmall(cValue); 
    
    return 0;
}