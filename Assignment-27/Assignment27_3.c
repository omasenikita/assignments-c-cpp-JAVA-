#include<stdio.h>

void StrCopyCaps(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if(*Src >= 'A' && *Src <= 'Z')
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

   
    StrCopyCaps(Crr,Arr);

    printf(" Copying Only Capital letters from one file to another file : %s\n",Arr);
    
    return 0;
}