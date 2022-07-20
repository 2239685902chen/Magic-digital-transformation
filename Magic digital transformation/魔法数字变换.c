#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int q = 0, w = 0;
	scanf("%d", &q);
	while (q - 1)
	{
		if (q % 2)
		{
			q *= 3;
			q += 1;
		}
		else
		{
			q /= 2;
		}
		w++;
	}
	printf("%d\n", w);
	return 0;
}