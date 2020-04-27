#include "sort.h"

void Swap(int* array, int min, int start) {
	int tmp = array[min];
	array[min] = array[start];
	array[start] = tmp;
}

void insertSort(int* array, int n) {
	for (int i = 0; i < n - 1; i++) {
		//end 已排序的最后一个位置
		//k 待插入的元素(数据)
		int end = i;
		int key = array[end + 1];
		//找到第一个小于等于key的位置
		//如果array[end]的值大于k的值则向后移动
		while (end >= 0 && array[end] > key) {
			array[end + 1] = array[end];
			end--;
		}
		//插入到end的后面
		array[end + 1] = key;
	}
}

void shellSort(int* array, int n) {
	int gap = n;
	while (gap > 1) {
		 gap = gap / 2;
		for (int i = 0; i < n - gap; i += gap) {
			int end = i;
			int key = array[end + gap];
			while (end >= 0 && array[end] > key) {
				array[end + gap] = array[end];
				end -= gap;
			}
			array[end + gap] = key;
		}
	}
}

void selectSort1(int* array, int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		int start = i;
		for (int j = start+1; j < n; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}
		Swap(array, start, min);
	}

}
void selectSort2(int * array, int n){
	int begin = 0;
	int end = n - 1;
	while (begin < end) {
		int min = begin;
		int max = end;
		for (int i = begin+1; i <= end; i++) {
			if (array[i] >= array[max])
				max = i;
			if (array[i] < array[min])
				min = i;
		}
		Swap(array, begin, min);     // 1                 10
		if (max == begin)          //  10 9 8 7 6 5 4 3 2 1
			max = min;              //begin               end
		Swap(array, end, max);      // max                min
		begin++;                    //1 2 3 4 5 10 6 7 8 9
		end--;
	}
}