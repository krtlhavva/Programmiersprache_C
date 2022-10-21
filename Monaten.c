#include <stdio.h>
#include <windows.h>


int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int monat;
    char antwort;

    printf("Geben Sie bitte einen Wert zwischen 1 und 12 ein: ");
    scanf("%d",&monat);

    do
    {
        antwort='n';
        switch(monat)
        {
        case 1:
            printf("Januar");
            break;
        case 2:
            printf("Februar");
            break;
        case 3:
            printf("März");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mai");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Dezember");
            break;
        default:
            printf("Sind Sie Modulo-Fan? (j/n) -> ");
            fflush(stdin);
            scanf("%c",&antwort);
            if(antwort=='j')
            {
                monat=monat%12;
                if(monat<=0)
                {
                    monat=monat+12;
                }
            }
            else
            {
                printf("Dann eben nicht.");
            }
        }
    }
    while(antwort=='j');

    printf("\n\n\n\n");
    system("pause");
    return 0;
}
