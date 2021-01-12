//Program about Logical Oprerator
#include<stdio.h>

int main()
{
   char ch;

   printf("Enter to check character:");
   scanf("%c",&ch);

   if(((ch>='a')&&(ch<='z'))||(ch>='A')&&(ch<='Z'))
    printf("\nThis is a Character\n");
   else
    printf("\nThis is nt a character\n");

   return 0;
}
