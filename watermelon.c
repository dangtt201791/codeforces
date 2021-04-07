#include <stdio.h>

int even(int w)
{
	int i;
	if (w%2 != 0)
		return 0;
	for (i=2; i<w; i+=2)
		if (w%2 == 0)
			return 1;
	return 0;
}
int main()
{
	int w;
	scanf("%d", &w);
	if (even(w) == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}

