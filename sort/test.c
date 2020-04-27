#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

void test1() {
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(array) / sizeof(array[0]);
	insertSort(array, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
void test2() {
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(array) / sizeof(array[0]);
	shellSort(array, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
void test3() {
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(array) / sizeof(array[0]);
	selectSort1(array, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
void test4() {
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(array) / sizeof(array[0]);
	selectSort2(array, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	test1();
	test2();
	test3();
	test4();
	system("pause");
	return 0;
}