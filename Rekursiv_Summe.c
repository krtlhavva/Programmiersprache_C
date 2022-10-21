#include <stdio.h>
#include <stdlib.h>

int summe_iterativ(int n)
{
    int summe=0;
    for(int i=0;i<=n;i++)
    {
        summe=summe+i;
    }
    return summe;
}
int summe_rekursiv(int n)
{
    if(n<2) return 1;
    return n+summe_rekursiv(n-1);
}

int main(void)
{
 int n,i,r;

    printf("Geben Sie eine Zahl ein: ");
    fflush(stdin);
    scanf("%d", &n);

    i=summe_iterativ(n);
    r=summe_rekursiv(n);

    printf("Ergebnis iterativ: %d\nErgebnis rekursiv: %d",i,r);

}
