#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int x,ans,isclear=0;

	x = rand() % 100+1;
	printf("������%d\n", x);
	
	while (isclear == 0) {
		printf("Please Enter Number: ");
		scanf_s("%d", &ans);
		printf("�𓚂�%d\n", ans);

		int dir = x - ans;
		if (dir == 0) {
			printf("�����ł��B");
			isclear = 1;
		}
		else {
			if (dir > 20) {
				printf("���������܂��B");
			}
			else if (dir > 10) {
				printf("�������ł��B");
			}
			else if (dir > 5) {
				printf("�����������ł��B");
			}
			else if (dir < -20) {
				printf("�傫�����܂��B");
			}
			else if (dir < -10) {
				printf("�傫���ł��B");
			}
			else if (dir < -5) {
				printf("�傫���ł��B");
			}
		}
	}
}