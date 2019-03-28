#include <stdio.h>
int main()
{
int N,i;
float som;
do
{
    	printf ("saisir nbre de termes");
    	scanf ("%d", &N);
}
while (N<1);
for (som=0.0, i=1 ; i<=N ; i++)
{
  	som += (float)1/i;
  	printf("La somme des %d premiers termes est %f \n", N, som);
}
}
