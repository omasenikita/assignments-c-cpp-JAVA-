
#include<stdio.h>

void StrCpyX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        *Dest = *Src;
         Src++;
         Dest++;
    }
    *Dest = '\0';  // terminate destination string
}
int main()
{
    char Crr[30] ={'\0'};
    char Arr[30] = {'\0'};

    printf("Enter the string that u wamt to copy to amother string:\n");
    scanf("%[^'\n']s",Crr);

    StrCpyX(Crr,Arr);

    printf("Copying contenet of one string to another :%s\n",Arr);
    
    return 0;
}