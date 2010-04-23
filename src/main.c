/*
 * main.c
 *
 *  Created on: 23.04.2010
 *      Author: Michael Wydler
 */

#include <stdio.h>
#include <stdlib.h>
#include "insertion_sort.h"

#define MAX 10
int array[MAX];

/*
 * Fill the array with your values
 */
void initArray() {
	int i;
	for(i = 0; i < MAX; i++) {
		array[i] = MAX-i;
	}
}

/*
 * Print all elements
 */
void printArray() {
	int j;
	for(j = 0; j < MAX; j++) {
		printf("%d ", array[j]);
	}
	printf("\n");
}

int main(void) {
	initArray();
	printf("unsorted: ");
	printArray();
	insertion_sort(array, MAX);
	printf("sorted: ");
	printArray();
	return EXIT_SUCCESS;
}
