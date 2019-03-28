#include <stdio.h>
int main()
{
int X,N,cpt;      
double res; 

do
{
	printf("Entrez un entier naturel ");
     	scanf("%d", &X);
}
while (X<0);
do
{
      	printf("Entrez un exposant N : ");
     	scanf("%d", &N);
}
while (N<0);
for (res=1.0, cpt=1 ; cpt<=N ; cpt++)
{       
	res *=X;
}
if (N==0 && X==0)
{
     	printf("zéro exposant zéro n'est pas défini !\n");
} 
else
{
     	printf("the result is : %d^%d = %.0f\n", X, N, res);
}
}
