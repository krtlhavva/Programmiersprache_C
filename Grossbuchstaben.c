#include <stdio.h>
#include <stdlib.h>

//sollen alle Kleinbuchstaben als Groﬂbuchstaben ausgegeben werden und alle anderen Zeichen unver‰ndert bleiben.

int main()
{
    char s[21];
    int n,i;


    printf("Geben Sie bitte ein Wort ein: ");
    fflush(stdin);
    scanf("%[^\n]",s);

    n=strlen(s);

    for(i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }

    }

    printf("%s",s);


    return 0;
}


