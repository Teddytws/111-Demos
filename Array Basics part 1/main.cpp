

#include <iostream>
#include "printarr.h"
#include <string>


//find a specific number in an array
void findNum (int arr[], int num);
//find the larget/smallest number in array
void findLargest (int arr[]);
//reverse the array
void reverseArr (int arr[]);
//sort the array "exchange sort"
void sortArr (int arr[]);

void printArr (int arr[]);
//
//what about adding 1 number at a time to an array?

using namespace std;
int main () {

	PrintArray ap;

	int sorted[10] = {0,1,2,3,4,5,6,7,8,9};
	int unsorted[10] = {45,23,78,22,11,7,50,99,37,18};


	findNum(unsorted, 20);
	findLargest(unsorted);
	reverseArr(unsorted);
	sortArr(unsorted);

	string s = "hello";

	cout << s.length() << endl;


}

void findNum (int arr[], int num) {

	bool found = false;

	for (int i = 0; i < 10; i++) {

		if (arr[i] == num) {
			found = true;
			break;
		}
	}

	if (found)
		std::cout << " the number " << num << " is in the array" << std::endl;
	else
		std::cout << " the number " << num << " was not found" << std::endl;

}


void findLargest (int arr[]) {

	int largest = arr[0];

	for (int i = 1; i < 10; i++) {

		if (arr[i] > largest)
			largest = arr[i];

	}

	std::cout << "the largest number is " << largest << std::endl;

}

void reverseArr (int arr[]) {

	int temp;

	for (int i= 0, j = 9; i < 10/2; i++, j--) {

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	} 

}


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


}

void printArr(int a[]) {

	for (int i= 0; i< 10; i++ ) {

		std::cout << a[i] << "  ";

	}
	std::cout << std::endl;

}


































