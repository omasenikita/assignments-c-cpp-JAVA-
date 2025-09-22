#include<stdio.h>

void StrCopySmall(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if(*Src >= 'a' && *Src <= 'z')
        {
            *Dest = *Src;
             Dest++;
        }
        Src++;      
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

   
    trCopySmall(Crr,Arr);

    printf(" Copying Only Small letters from one file to another file : %s\n",Arr);
    
    return 0;
}