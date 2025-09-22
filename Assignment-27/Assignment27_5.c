#include<stdio.h>

void StrCatX(char *src, char *dest )
{
    while(*src !='\0')
    {
        src++;

    }
    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;

    }
    dest = '\0';
}
int main()
{

    char Crr1[50] = {'\0'};
    char Crr2[50] = {'\0'};

    printf("Enter the first string: \n");
    scanf("%[^'\n']s",Crr1);

    printf("Enter the second string : \n");
    scanf(" %[^'\n']s",Crr2);

    StrCatX(Crr1,Crr2);
    printf("String after conacate into first string : %s\n",Crr1);

    return 0;
}