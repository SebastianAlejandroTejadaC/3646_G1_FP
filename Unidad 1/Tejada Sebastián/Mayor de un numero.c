#include <stdio.h>

void main()
{
	int n1,n2;
	printf("Ingrese numero 1: ");
	scanf("%d",&n1);
	printf("Ingrese numero 2: ");
	scanf("%d",&n2);
	if (n1==n2)
		printf("%d y %d son iguales\n",n1,n2);
	else
		if (n1>n2)
            printf("\n");
			printf("n1=%d es el mayor\n",n1);
		else
            printf("\n");
			printf("n2=%d es el mayor\n",n2);
}
