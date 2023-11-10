#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i;
	for (i = 1; i < 10001; i++) {
		if (i % 13 == 0 && i % 17 == 0) {
			printf("%d\n",i);
		}
	}

	return 0;
}