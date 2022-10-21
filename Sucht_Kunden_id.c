#include <stdio.h>
#include <string.h>
#include <time.h>



typedef struct
{
    int id;
    char nachname[100];
} KUNDE;

int SELECTnachnameWHEREid_x(KUNDE kunden[], int x, int laenge)
{
    for(int i=0; i<laenge; i++)
    {
        if(kunden[i].id==x)
        {
            printf("der Kunde mit der id %d ist: Herr %s",x,kunden[i].nachname);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int x,i,treffer;
    KUNDE kunden[3];
    for( i=0; i<3; i++)
    {
        printf("\nGeben Sie bitte %d. Nachname ein: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",kunden[i].nachname);
        kunden[i].id=i+1;
    }

    printf("\nGeben Sie gesuchte id ein: ",i+1);
    fflush(stdin);
    scanf("%d",&x);

    treffer= SELECTnachnameWHEREid_x(kunden,x,3);

    if(treffer==0)
        printf("Der Kunde mit der id %d wurde nicht gefunden",x);

}
