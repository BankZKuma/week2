#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int number[100];
	int sum = 0, count = 0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		number[i] = rand() % 1001;
	}
	int max = number[0];
	int min = number[0];
	for (int i = 0; i < 100; i++) {
		number[i] = number[i] < min ? min : max;
	}
	for (int i = 1; i <= max; i++) {
		if (max % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		printf("%d is Prime", max);
	}
	else if (count != 2)
		printf("%d is NotPrime", max);
}
