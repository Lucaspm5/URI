#include <stdio.h>

int main(void)
{
     int cont=0,aux;
     float n,s=0;
     for(aux=0;aux<6;aux++)
     {
	scanf("%f",&n);
	if(n>0)
	{
	   s+=n;
	   cont++;
	}
     }
     printf("%i valores positivos\n",cont);
     printf("%.1f\n",s/cont);
 return 0;
}
