#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	double arr[4] = { 1.000002, 1.000001, 1.000001, 1.000000 };

	double det = (arr[0] * arr[3]) - (arr[1] * arr[2]);

	double temp = arr[3];

	//{
	arr[3] = arr[0];
	arr[0] = temp;

	arr[1] = -arr[1];
	arr[2] = -arr[2];
	//}

	for (int i = 0; i < 4; i++) {
		arr[i] = arr[i] * det;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%30.23lf\t", arr[i * 2 + j]);
		}
		printf("\n");
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}