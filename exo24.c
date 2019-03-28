#include <stdio.h>
int main()
{
int  X;
int  N=0;
int  som=0; 
long prod=1; 
do
{
     	printf("Entrez le %d %s chiffre : ", (N+1), (N)?"e":"er");
     	scanf("%d", &X);

     	if (X<0||X>9)
	{
        	printf("\a");
	}
     	else if (X)
        {
         	N++;
         	som +=X;
         	prod *=X;
        }
     	else if (!X && N>0)
        {
         	printf("La somme   des chiffres est %d \n", som);
         	printf("Le produit des chiffres est %ld\n", prod);
         	printf("La moyenne des chiffres est %f \n", (float)som/N);
        }
}
while (X);
}
