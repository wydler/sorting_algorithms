/*
 * kniffelsort.cpp
 *
 *  Created on: 26.04.2010
 *      Author: michael
 */

#include "kniffelsort.h"

#include <stdio.h>
#include <stdlib.h>

void kniffelsort(int a[], int l) {
	int i;
	int count = 0;
	while(1) {
		count++;
		int flag = 0;
		for(i = 0; i < l; i++) {
			int tmp = a[i];
			int rand2 = rand()%l;
			a[i] = a[rand2];
			a[rand2] = tmp;
		}
		for(i = 0; i < l-1; i++) {
			if(a[i] > a[i+1]) {
				flag++;
			}
		}
		if(flag == 0) {
			return 1;
		}
		if(count%10000000 == 0) {
			printf(" %d\n", count);
		}
	}
}

void kniffelsort2(int a[], int l) {
	int i;
	int count = 0;
	while(1) {
		count++;
		int flag = 0;
		for(i = 0; i < l-1; i++) {
			if(a[i] > a[i+1]) {
				flag++;
				int tmp = a[i];
				int rand2 = rand()%l;
				a[i] = a[rand2];
				a[rand2] = tmp;
			}
		}
		if(flag == 0) {
			return 1;
		}
		if(count%10000000 == 0) {
			printf(" %d\n", count);
		}
	}
}
