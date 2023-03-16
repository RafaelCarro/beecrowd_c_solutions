#include <stdio.h>

int main()
{
	unsigned long long N = 0, sumC = 0, pos = 0;
	long long i = 0;
	scanf("%llu", &N);

	unsigned long long array[N];

	for (i = 0; i < N; i++)
		scanf("%llu", &array[i]), sumC += array[i];
	i = 0;
	while (i >= 0 && i < N)
	{
		if (i + 1 > pos)
			pos = i + 1;

		if (array[i] == 0) i--;

		else if (array[i] % 2 == 0)
			sumC--, array[i]--, i--;
		else
			sumC--, array[i]--, i++;
	}
	printf("%llu %llu\n", pos, sumC);
	return 0;
}