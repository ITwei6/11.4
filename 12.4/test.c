#include "2game.h"
int Fun(int n, int k)
{
	if (k > 1)
	{
		return n * Fun(n, k - 1);
	}
	else
		return n;
}
{
	int n, k;
	scanf("%d%d", &n, &k);
	int ret = Fun(n, k);
	printf("%d", ret);
	return 0;
}