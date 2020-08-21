#include<stdio.h>
#define MAX 10
int menu();
void ResetAll(bool bookstatus[MAX]);
void check(bool bookstatus[MAX]);
bool borrow(bool bookstatus[MAX]);
bool returnbook(bool bookstatus[MAX]);

int main() {
	bool bookstatus[MAX];
	ResetAll(bookstatus);
	int choice;
	do {
		choice = menu();
		switch (choice) {
		case 0:
			printf("Bye Bye NaJaa : \n");
			break;
		case 1:
			printf("Borrow naJaa : \n");
			if (borrow(bookstatus)) {
				printf("Borrow succeed\n");
			}
			else {
				printf("Can not borrow\n");
			}
			break;
		case 2:
			printf("Return naJaa : \n");
			if (returnbook(bookstatus)) {
				printf("Return succeed\n");
			}
			else {
				printf("Can not return\n");
			}
			break;
		case 3:
			printf("Check naJaa : \n");
			check(bookstatus);
			break;
		default:
			break;
		}

	} while (choice != 0);
	return 0;
}
void check(bool bookstatus[MAX]) {
	for (int i = 0; i < MAX; i++) {
		if (!bookstatus[i]) {
			printf("[%d] is Free\n",i);
		}
		else {
			printf("[%d] is Booked\n",i);
		}
	}
}
void ResetAll(bool bookstatus[MAX]) {
	for (int i = 0; i < MAX; i++) {
		bookstatus[i] = false;//false =can book  true =can't book
	}
}
int menu() {
	int choice;
	printf("[0] Exit\n");
	printf("[1] Borrow\n");
	printf("[2] Return\n");
	printf("[3] Check\n");
	printf("Enter number===>");
	scanf_s("%d", &choice);
	return choice;
}
bool borrow(bool bookstatus[MAX]) {
	int num;
	printf("Enter book number : ");
	scanf_s("%d", &num);
	if (num >= 0 && num < MAX && !bookstatus[num+1]) {
		bookstatus[num+1] = true;
		return true;
	}
	return false;
}
bool returnbook(bool bookstatus[MAX]) {
	int num;
	printf("Enter book number : ");
	scanf_s("%d", &num);
	if (num >= 0 && num < MAX && bookstatus[num + 1]) {
		bookstatus[num + 1] = false;
		return true;
	}
	return false;
}