//A Program to Print the vowel from the character
#include<stdio.h>

int main()
{
   char ch;

   printf("Enter a Character:");
   scanf("%c",&ch);

   if(((ch>='a')&&(ch<='z'))||(ch>='A')&&(ch<='Z'))
   {
       if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
        printf("\n This is a Vowel\n");
       else
        printf("\nThis is a consonant\n");
   }

   else
    printf("\nThis is not an Alphabet\n");
    
   return 0;
}
