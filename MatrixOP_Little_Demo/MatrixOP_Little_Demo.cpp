#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	double arr[4] = { 1.000002, 1.000001, 1.000001, 1.000000 };
	double originalArr[4] = { 1.000002, 1.000001, 1.000001, 1.000000 };

	double det = (arr[0] * arr[3]) - (arr[1] * arr[2]);

	double temp = arr[3];

	//{
	arr[3] = arr[0];
	arr[0] = temp;

	arr[1] = -arr[1];
	arr[2] = -arr[2];
	//}

	for (int i = 0; i < 4; i++) {
		arr[i] = arr[i] / det;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%100.64lf\t", arr[i * 2 + j]);
		}
		printf("\n");
	}

	printf("\n\n");

	double newArr[4] = { 0 };

	newArr[0] = arr[0] * originalArr[0] + arr[1] * originalArr[2];
	newArr[1] = arr[0] * originalArr[1] + arr[1] * originalArr[3];
	newArr[2] = arr[2] * originalArr[0] + arr[3] * originalArr[2];
	newArr[3] = arr[2] * originalArr[1] + arr[3] * originalArr[3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%100.64lf\t", newArr[i * 2 + j]);
		}
		printf("\n");
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}