#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int x,ans,isclear=0;

	x = rand() % 100+1;
	printf("正解は%d\n", x);
	
	while (isclear == 0) {
		printf("Please Enter Number: ");
		scanf_s("%d", &ans);
		printf("解答は%d\n", ans);

		int dir = x - ans;
		if (dir == 0) {
			printf("正解です。");
			isclear = 1;
		}
		else {
			if (dir > 20) {
				printf("小さすぎます。");
			}
			else if (dir > 10) {
				printf("小さいです。");
			}
			else if (dir > 5) {
				printf("少し小さいです。");
			}
			else if (dir < -20) {
				printf("大きすぎます。");
			}
			else if (dir < -10) {
				printf("大きいです。");
			}
			else if (dir < -5) {
				printf("大きいです。");
			}
		}
	}
}