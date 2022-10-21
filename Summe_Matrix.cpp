#include<stdio.h>

int main ()
{

    int i,j,x,y,a,b,zeile,spalte;

    printf("Anzahl der Zeilen: ");
    scanf("%d",&zeile);

    printf("Anzahl der Spalten: ");
    scanf("%d",&spalte);

    printf("\n");
    printf("1. Matrix\n");

    int m[zeile][spalte];

    for(i=0; i<zeile; i++)
    {
        for(j=0; j<spalte; j++)
        {
            printf("[%d][%d] Werte:",i,j);
            fflush(stdin);
            scanf("%d",&m[i][j]);
        }

    }
    printf("\n");
    for (i=0; i<zeile; i++)
    {
        for(j=0; j<spalte; j++)
        {
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int m2[zeile][spalte];
    printf("\n");
    printf("2. Matrix\n");


    for(x=0; x<zeile; x++)
    {
        for(y=0; y<spalte; y++)
        {
            printf("[%d][%d] Werte:",x,y);
            fflush(stdin);
            scanf("%d",&m2[x][y]);
        }
    }
    printf("\n");

    for(x=0; x<zeile; x++)
    {
        for(y=0; y<spalte; y++)
        {
            printf(" %d ",m2[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    int summe[zeile][spalte];

    for(a=0; a<zeile; a++)
    {
        for(b=0; b<spalte; b++)
        {
            summe[a][b]=m[a][b] + m2[a][b];
            printf(" %d ",summe[a][b]);
        }
        printf("\n");
    }




    return 0;
}

