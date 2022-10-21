#include <stdio.h>
#include <stdlib.h>

int dezimal_nach_binaer(int n)
{
if(n>0)
{
    dezimal_nach_binaer(n/2);
    printf("%d ",n%2);

}

}

int main(void)
{
    int zahl;
    printf("Geben Sie eine Zahl ein, die Sie binaere Zahlensystem umwandeln moehten: ");
    fflush(stdin);
    scanf("%d",&zahl);

    dezimal_nach_binaer(zahl);


}
