#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			for (int j = 1; j <= n - 1; j++) {
				if (i + j == (n / 2) + 1 || j - i == (n / 2) - 1)
					printf("*");
				else {
					printf("-");
				}
			}
			printf("\n");
		}
		for (int i = n / 2; i > 0; i--) {
			for (int j = 1; j <= n - 1; j++) {
				if (i + j == (n / 2) + 1 || j - i == (n / 2) - 1)
					printf("*");
				else {
					printf("-");
				}
			}
			printf("\n");
		}
	}
	if (n % 2 != 0)
	{
		for (int i = 1; i <= (n + 1) / 2; i++) {
			for (int j = 1; j <= n; j++) {
				if (i + j == (n + 1) / 2 + 1 || j - i == (n + 1) / 2 - 1)
					printf("*");
				else {
					printf("-");
				}
			}
			printf("\n");
		}
		for (int i = (n + 1) / 2 - 1; i > 0; i--) {
			for (int j = 1; j <= n; j++) {
				if (i + j == (n + 1) / 2 + 1 || j - i == (n + 1) / 2 - 1)
					printf("*");
				else {
					printf("-");
				}
			}
			printf("\n");
		}	return 0;
	}
}