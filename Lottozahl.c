#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
srand(time(NULL));
rand();

int i=0,j,dublette,lotto[6];

printf("Aktuelle LottoZahl: ");

for(i=0; i<6; i++){

    lotto[i]= rand()%49+1;
    dublette=0;
    printf("%d- ", lotto[i]);

    for(j=0;j<i;j++)
    {
        if(lotto[i]==lotto[j])
        {
            dublette=1;
            break;
        }
    }
    if(dublette==1)
    {
        i--;
        continue;
    }
}
}
