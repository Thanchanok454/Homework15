#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 20; j++) {
			if ((i + j) % 2 == 1) {
				printf("* ");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}