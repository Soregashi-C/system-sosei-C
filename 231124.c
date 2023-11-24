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
			printf("パスワード使用可能です。\n");
		}
		else {
			printf("パスワード使用できません。\n");
			if (big == 0) {
				printf("*大文字がありません\n");
			}
			if (small == 0) {
				printf("*大文字がありません\n");
			}
			if (any == 0) {
				printf("*数字または日本語がありません\n");
			}
		}
	}
	else {
		printf("パスワード使用できません。\n");
		if (length < 8) {
			printf("*文字数があと%d文字足りません。\n", 8 - length);
		}
		else {
			printf("*文字数が%d文字多いです。\n", length - 16);
		}
	}
	return 0;
}