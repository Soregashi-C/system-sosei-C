#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {

	srand(time(0));
	int itl,str,chara;

	itl = rand() % 21;
	printf("%d\n",itl);

	str = rand() % (21 - itl);
	printf("%d\n", str);

	chara = rand() % (21 - itl - str);
	printf("%d\n", chara);

	if (itl > str) {
		if (itl > chara) {
			printf("����");
		}
		else {
			printf("���l");
		}
	}
	else {
		if (str > chara) {
			printf("�t�@�C�^�[");
		}
		else {
			printf("���l");
		}
	}
	return 0;
}
