

#include <iostream>
#include "printarr.h"

//find a specific number in an array
void findNum (int arr[], int value);
//find the larget/smallest number in array
void findLargest (int arr[]);
//reverse the array
void reverseArr (int arr[]);
//sort the array "exchange sort"
void sortArr (int arr[]);
//
//what about adding 1 number at a time to an array?


int main () {

	PrintArray ap;

	int sorted[10] = {0,1,2,3,4,5,6,7,8,9};
	int unsorted[10] = {45,23,78,22,11,7,50,99,37,18};

	ap.arrPrintOne(sorted);
	ap.arrPrintOne(unsorted);

	findNum(unsorted, 22);

	findLargest(unsorted);

	reverseArr(unsorted);

	sortArr(unsorted);



}

void findNum (int arr[], int value) {

	bool found = false;
	for (int i = 0; i < 10; i++) {

		if (arr[i] == value) {
			found = true;
		}
	}

	if (found) {

		std::cout << "found it" << std::endl;
	}
	else {
		std::cout << "didnt find it" << std::endl;

	}
}


void findLargest (int arr[]) {

	int largest = arr[0];

	for (int i = 0; i < 10; i++) {

		if (arr[i]>largest) {
			largest = arr[i];
		}
	}

	std::cout << "the largest number is " << largest << std::endl;



}

void reverseArr (int arr[]) {

	int temp;
	for(int i = 0, j = 9; i < 10/2; i++, j--) {

		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
	PrintArray ap;
	ap.arrPrintOne(arr);
}

void sortArr (int arr[]) {

	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (arr[i] < arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

PrintArray ap;

ap.arrPrintOne (arr);


}



































