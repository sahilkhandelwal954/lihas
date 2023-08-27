#include <stdio.h>
int main()
{
	int i=0,n,j=0;
	printf("enter the value\n ");
	scanf("%d",&n);
	while(i<n)
	{
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}