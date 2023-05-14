#include<stdio.h>

 int main() {

	int A;
	int B;

	scanf("%d %d", &A, &B);

	if (A > B) {
		printf(">\n");
	}
	else if (A < B) {
		printf("<\n");
	}
	else if (A == B) {
		printf("==\n");
	}
	else {
		//none
	}

	return 0;
}