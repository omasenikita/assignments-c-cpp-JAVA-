////////////////////////////////////////////////////////////////////////////////////////
//
// File name:   Assignment27_1.c
// Description: Used copy content of one file to another file
// input:       char(name of the file)
// output:      open the file
// Author :     Nikita Shahaji Omase
// Date :       12/08/2025
//
////////////////////////////////////////////////////////////////////////////////////////  

#include<stdio.h>

void StrnCpyX(char *Src, char *Dest,int iCnt)
{
    while(iCnt > 0 && *Src != '\0')
    {
        *Dest = *Src;
         Src++;
         Dest++;
         iCnt--;
    }
    *Dest = '\0';  // terminate destination string
}
int main()
{
    char Crr[30] ={'\0'};
    char Arr[30] = {'\0'};
    int iCount = 0;

    printf("Enter the string that u wamt to copy to amother string:\n");
    scanf("%[^'\n']s",Crr);

    printf("How many Charater you wnat to copy\n");
    scanf("%d",&iCount);

    StrnCpyX(Crr,Arr,iCount);

    printf("Copying Number of letters from one String to another string: %s\n",Arr);
    
    return 0;
}