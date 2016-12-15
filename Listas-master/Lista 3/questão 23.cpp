#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#define m 14	
	
int media(int a)
{
	float nota[m], contador=0, mediatotal=0;
	for (a=0; a<=m; a++)
		{
			printf("Digite a nota: \n");
			scanf("%f", &nota[a]);
			mediatotal= mediatotal+nota[a];
			contador++;
		}
		printf("A media de notas da sala eh %2.f\n", (mediatotal/contador));
}

int main()
{
	float nota[m], contador=0, mediatotal=0;
	media(0);
	getch();
	return 0;
}
	
