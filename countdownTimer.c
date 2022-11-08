#include<stdio.h>
#include<stdlib.h>


int main ()
{
	int icounter;
	printf("\n Enter a value of the counter\n");
	scanf ("%d", &icounter);
	
	
	while(icounter != 0)
	{
		printf ("\n\t%d", icounter);
		icounter--;
		sleep(1);
//		system("clear");
	}
	
	printf ("\n Count down timer has expired\n");
	return 0;
}
