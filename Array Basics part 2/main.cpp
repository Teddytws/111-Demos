

#include <iostream>
#include "printarr.h"

//sort the array "exchange sort"
void sortArr (int arr[]);
//
//what about adding 1 number at a time to an array?


int main () {

	PrintArray ap;

	int sorted[10] = {0,1,2,3,4,5,6,7,8,9};
	int unsorted[10] = {45,23,78,22,11,7,50,99,37,18};
	int random

	ap.arrPrintOne(sorted);
	ap.arrPrintOne(unsorted);



}

v
void sortArr (int arr[]) {

	int temp;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}

	}

	PrintArray ap;

	ap.arrPrintOne(arr);
}




































