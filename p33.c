// WAP to enter a character from user and check whether it is vowel or consonants. 
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet=");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                printf("\n%c is vowel",ch);
                break;
        default:
               printf("\n%c is consonant",ch);
               break;
    }
}