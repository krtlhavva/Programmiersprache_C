#include <stdio.h>
#include <stdlib.h>

int fakultaet(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

int rekursiv(int n)
{
    if(n<2) return 1;
    return n*rekursiv(n-1);
}

int main(void)
{
    int n,ergebnis,rek;
    printf("Geben Sie eine Zahl ein: ");
    fflush(stdin);
    scanf("%d", &n);

    ergebnis=fakultaet(n);
    rek=rekursiv(n);
    printf("\nErgebnis: %d\nErgebnis2: %d",ergebnis,rek);

    return 0;
}
