/*
 * insertion_sort.c
 *
 *  Created on: 23.04.2010
 *      Author: Michael Wydler
 */

#include "insertion_sort.h"

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int n) {
	/* init vatiables */
	int i;
	int j;
	int x;
	/* check all elements */
	for(i = 1; i < n; i++) {
		x = a[i];
		/* loop to change elements */
		for(j = i-1; (x < a[j]) && (j >= 0); j--) {
			a[j+1] = a[j];
		}
		a[j+1] = x;
	}
}
