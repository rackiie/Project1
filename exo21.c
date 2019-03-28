#include <stdio.h>
int main()
{
int  N,cpt;   
double fact;
do
{
	printf("Entrez un entier naturel : ");
     	scanf("%d", &N);
}
while (N<0);
for (fact=1, cpt=1 ; cpt<=N ; cpt++)
{
	fact*=cpt;
}
printf ("%d! = %.0f\n", N, fact);
}

