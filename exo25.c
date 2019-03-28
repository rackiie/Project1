#include <stdio.h>
int main()
{
int  X;      
int  N=0;    
long val=1;  
long nb=0; 
do
{
     	printf("Entrez le %d%s chiffre : ", (N+1), (N)?"e":"er");
     	scanf("%d", &X);
	if (X<0||X>9)
	{
        	printf("\a");
	}
     	else if (X)

        {
         	nb += val*X;
         	N++;
         	val *= 10;
        }
     	else
	{
        printf("La valeur du nombre renversé est %ld\n", nb);
    	}
}
while (X);
}
