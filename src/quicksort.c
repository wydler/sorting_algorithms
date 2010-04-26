/*
 * quicksort.c
 *
 *  Created on: 24.04.2010
 *      Author: michael
 */

#include "quicksort.h"

void quicksort(int a[], int p, int r) {
	if(p < r) {
		int q = partition(a, p, r);
		quicksort(a, p, q);
		quicksort(a, q+1, r);
	}
}

int partition(int a[], int p, int r) {
	int x = a[p];
	int i = p;
	int j = r;
	while(1) {
		while(a[j] > x) {
			j--;
		}
		while(a[i] < x) {
			i++;
		}
		if(i < j) {
			int tmp;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		} else {
			return j;
		}
	}
}
