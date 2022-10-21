#include <stdio.h>
#include <string.h>
#include <time.h>



typedef struct
{
    char text[100];
    int laenge;
} WORT;

int ermittelWortlaenge(WORT*w )
{
    (*w).laenge=strlen((*w).text);
}

int main()
{
    WORT arr[3];
    for(int i=0; i<3; i++)
    {
        printf("\nGeben Sie bitte %d. Text ein: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",arr[i].text);
    }
    WORT w;

    for(int i=0; i<3; i++)
    {
       ermittelWortlaenge(&arr[i]);
    }
    printf("\n\n");
    for(int i=0; i<3; i++)
    {
        printf("Wort %d: %s\nLaenge: %d\n\n",i+1,arr[i].text,arr[i].laenge);
    }
}
