#include <stdio.h>

int main()
{
	char a[5];

	printf("Please Enter up to 5 characters: ");
	scanf_s("%c", a);

	int j = 0;

	for (int i = 0; i < 5; i++) {
		if ((a[i] >= 'A') && (a[i] <= 'Z')) {
			j++;
		}
	}
	if (j > 0) {
		printf("大文字が含まれています\n");
	 }
	else {
		printf("大文字が含まれていません\n");
	}

	return 0;
}
