#include<stdio.h>

int rundeINT(int zahl, int e) //rundet n auf ein Vielfaches von „10 hoch e“
{
	int x,potenz=1;
	for(int i=0;i<e;i++)   //10^e
	{
		potenz=potenz*10;  // 10*10*10*10...*10 --> e mal *10
	}
	x=zahl%potenz;
	return x;
}

int main()
{
	int e,zahl,ergebnis;
	char antwort;
	ergebnis=rundeINT(zahl,e);
	do
	{
		printf("\nGeben Sie bitte eine ganze Zahl ein: ");
		fflush(stdin);
		scanf("%d",&zahl);

		printf("\nGeben Sie bitte den Expontenten ein: ");
		fflush(stdin);
		scanf("%d",&e);

		ergebnis=rundeINT(zahl,e);
		printf("\n%d ergibt nach Runden auf ein Vielfaches von 10 hoch %d den Wert: %d ",zahl,e,zahl-ergebnis);

		printf("\nMoechten Sie noch einmal?(j/n): ");
		fflush(stdin);
		scanf("%c",&antwort);

	}while(antwort=='j');


	printf("\n\nENDE");
	printf("\n\n");
}
