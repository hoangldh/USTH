#include <stdio.h>

int main()
{
	int n=5;
	int i=3;
	while (i<=n)
	{
		if (n%i==0)
		{
			printf("\n %d",i);
		}
		i++;
	};
	printf("%d", i);
}