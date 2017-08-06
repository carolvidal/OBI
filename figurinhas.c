#include <stdio.h>
#include <string.h>

int main() 
{
	int N, R, V, i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) 
	{
		scanf("%d", &R); 
		scanf("%d", &V); 

		if (R > V)
		{
			if (R % V == 0)
				printf("%d", V);
			else
				printf ("%d", R%V);
		}
		else if (V > R)
		{
			if (V%R == 0)
				printf("%d", R);
			else
				printf ("%d", V%R);
		}	
	}

	return 0;
}
