#include<stdio.h>

int main() {

	int H,M;

	scanf("%d %d", &H, &M);
	
	
	if (M < 45 && M >= 0) {

		if (H == 0) {
			H = 23;
		}
		else {
			H = H - 1;
		}
		M = M + 60 - 45;
	}
	else if (M >= 45 && M <= 59) {
		
		M = M - 45;
	}
	printf("%d %d", H, M);

	return 0;
}