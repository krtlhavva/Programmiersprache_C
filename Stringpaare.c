#include <stdio.h>
#include <windows.h>
#include <string.h>

// -	Beim ersten Paar sollen zwei identische Strings eingegeben werden.
// -	Beim zweiten Paar sollen die Strings alphabetisch korrekt aufeinanderfolgen.
// -	Beim dritten Paar sollen die beiden Strings umgekehrt alphabetisch eingegeben werden.

// Nur wenn alle drei Eingaben den genannten Anforderungen entsprachen, wird auf der Konsole „Alles O.K.“ ausgegeben, und das Programm endet.

//Falls hingegen mindestens eine der drei Anforderungen verletzt wurde, so werden erneut 3 String-Paare abgefragt.


int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int i,richtig;
    char string1[50],string2[50];

    do
    {
        richtig=0;
        for(i=0;i<3;i++)
        {
            printf("Geben Sie bitte einen ersten String ein -> ");
            fflush(stdin);
            scanf("%[^\n]",string1);

            printf("Geben Sie bitte einen zweiten String ein -> ");
            fflush(stdin);
            scanf("%[^\n]",string2);

            switch(i)
            {
                case 0: if(strcmp(string1,string2)== 0) richtig ++; break;
                case 1: if(strcmp(string1,string2)==-1) richtig ++; break;
                case 2: if(strcmp(string1,string2)== 1) richtig ++; break;
            }
            printf("\n");
        }
        printf("\n\n");
    }
    while(richtig!=3);

    printf("Alles O.K.");

    printf("\n\n\n\n");
    system("pause");
    return 0;
}
