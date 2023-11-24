#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("Please Enter a Password: ");
	scanf("%99s", a);

	int big = 0;
	int small = 0;
	int any = 0;
	int length = strlen(a);
	if (length >= 8 && length <= 16) {
		for (int i = 0; i < length; i++) {
			if ((a[i] >= 'A') && (a[i] <= 'Z')) {
				big++;
			}
			else if ((a[i] >= 'a') && (a[i] <= 'z')) {
				small++;
			}
			else {
				any++;
			}
		}

		if (big > 0 && small > 0 && any > 0) {
			printf("�p�X���[�h�g�p�\�ł��B\n");
		}
		else {
			printf("�p�X���[�h�g�p�ł��܂���B\n");
			if (big == 0) {
				printf("*�啶��������܂���\n");
			}
			if (small == 0) {
				printf("*�啶��������܂���\n");
			}
			if (any == 0) {
				printf("*�����܂��͓��{�ꂪ����܂���\n");
			}
		}
	}
	else {
		printf("�p�X���[�h�g�p�ł��܂���B\n");
		if (length < 8) {
			printf("*������������%d��������܂���B\n", 8 - length);
		}
		else {
			printf("*��������%d���������ł��B\n", length - 16);
		}
	}
	return 0;
}