#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char vorname[31];
    char nachname[51];
    float gehalt;
}PERSON;

typedef struct
{
    char kennzeichen[31];
    int baujahr;
}AUTO;

int main()
{
    PERSON p;
    p.id=4711;
    p.gehalt=2222.99;
    strcpy(p.vorname, "Petra");
    strcpy(p.nachname, "Mustermann");

    PERSON p2={4712,"Petra","Hans",3000};

    printf("Vorname: %s\n",p.vorname);

   AUTO autoArray[3];

   for(int i=0; i<3;i++)
   {
       printf("\nGeben Sie bitte das Kennzeichen ein: ");
       fflush(stdin);
       scanf("%[^\n]",autoArray[i].kennzeichen);

       printf("\nGeben Sie bitte das Baujahr ein: ");
       fflush(stdin);
       scanf("%d",&autoArray[i].baujahr);

       printf("\n");
   }

   for(int i=0; i<3;i++)
   {
       printf("\nKennzeichen: %s\nBaujahr:%d ",autoArray[i].kennzeichen,autoArray[i].baujahr);

       printf("\n");
   }


}




