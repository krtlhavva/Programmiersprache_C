#include <stdio.h>
#include <windows.h>

int istPrimzahl(int n)
{
    int i;
    if(n==1) return 0; // 1 ist keine Primzahl

    for(i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int istPrimzahlZwilling(int n)
{
    if(istPrimzahl(n)+istPrimzahl(n+2)==2) return 1;
    return 0;
}

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int n;
    for(n=1;n<20;n++)
    {
        if(istPrimzahlZwilling(n)==1) printf("(%d/%d) ist ein Primzahlzwilling\n",n,n+2);
        else printf("(%d/%d) ist KEIN Primzahlzwilling\n",n,n+2);
    }

    printf("\n\n\n\n");
    system("pause");
    return 0;
}
