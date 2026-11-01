#include<stdio.h>
int main()
{
	int A, B, m, i, flag, a = 0;
	scanf("%d%d", &A, &B);

	for (m = A; m <= B; m++)
	{
		flag = 1;
		for (i = 2; i < m; i++)
			if (m % i == 0)
				flag = 0;
		if (flag == 1)
		{
			if (a == 0)
			{
				printf("%d", m); a++;
			}
			else
				printf(",%d", m);
		}
}
}
