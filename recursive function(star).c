#include<stdio.h>
//baekjoon 2447

void star(int i, int j, int n)
{
	if ((i / n) % 3 == 1 && (j/n) % 3 == 1)
		printf(" ");
	else {
		if (n / 3 == 0)
			printf("*");
		else
			star(i, j, n / 3);
	}
}
int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < N;j++)
		{
			star(i, j, N);
		}
		printf("\n");
	}
	return 0;
}