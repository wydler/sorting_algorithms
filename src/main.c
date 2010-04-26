/*
 * main.c
 *
 *  Created on: 23.04.2010
 *      Author: Michael Wydler
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertion_sort.h"
#include "quicksort.h"
#include "kniffelsort.h"

#define MAX 50
int array[MAX];

/*
 * Fill the array with your values
 */
void initArray() {
	srand(time(0));
	int i;
	for(i = 0; i < MAX; i++) {
		array[i] = rand()%MAX;
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

	//insertion_sort(array, MAX);
	quicksort(array, 0, MAX-1);
	//kniffelsort(array, MAX);

	printf("sorted: ");
	printArray();
	return EXIT_SUCCESS;
}
