#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int porfor(int x)
{
	for(x=0; x<101; x++){
		printf("%d\n", x);
	}
}

int porwhile(int n)
{
	while(n<100)
	{
		n += 1;
		printf("%d\n", n);
	}
}

int dowhile(int c)
{
	do
	{
		c++;
		printf("%d\n", c);
	} while(c<100);
}

int main()
{
	porfor(0);
	porwhile(0);
	dowhile(0);
	getch();
	return 0;
}
