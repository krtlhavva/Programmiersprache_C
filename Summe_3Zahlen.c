#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    rand();
    int z1=0,z2=0,z3=0,summe=0;
    float treffer=0;

    for(int i=0; i<5;i++)
    {
        z1=rand()%10+1;
        z2=rand()%10+1;
        z3=rand()%10+1;

        printf("\nGib die Summe von %d, %d, %d ein: ",z1,z2,z3);
        fflush(stdin);
        scanf("%d",&summe);

        if(summe==z1+z2+z3)
        {
            treffer=treffer+1;
        }
    }

    printf("\n\nDer prozentuale Werte an richtigen Eingaben betraegt: %.2f",treffer/5*100);

}
